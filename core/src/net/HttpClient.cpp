/*
 *
 * HttpClient
 * ledger-core
 *
 * Created by Pierre Pollastri on 30/11/2016.
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2016 Ledger
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 */
#include <iostream>
#include "HttpClient.hpp"
#include "../utils/hex.h"

namespace ledger {
    namespace core {

        HttpClient::HttpClient(const std::string &baseUrl, const std::shared_ptr<api::HttpClient> &client,
                               const std::shared_ptr<api::ExecutionContext> &context) {
            _baseUrl = baseUrl;
            _client = client;
            _context = context;
            if (_baseUrl.back() != '/') {
                _baseUrl += "/";
            }
        }

        HttpRequest HttpClient::GET(const std::string &path, const std::unordered_map<std::string, std::string> &headers) {
            return createRequest(api::HttpMethod::GET, path, std::experimental::optional<std::vector<uint8_t>>(), headers);
        }

        HttpRequest HttpClient::PUT(const std::string &path, const std::vector<uint8_t> &body,
                                    const std::unordered_map<std::string, std::string> &headers) {
            return createRequest(api::HttpMethod::PUT, path, std::experimental::optional<std::vector<uint8_t>>(), headers);
        }

        HttpRequest HttpClient::DEL(const std::string &path, const std::unordered_map<std::string, std::string> &headers) {
            return createRequest(api::HttpMethod::DEL, path, std::experimental::optional<std::vector<uint8_t>>(), headers);
        }

        HttpRequest HttpClient::POST(const std::string &path, const std::vector<uint8_t> &body,
                                     const std::unordered_map<std::string, std::string> &headers) {
            return createRequest(api::HttpMethod::POST, path, std::experimental::optional<std::vector<uint8_t>>(body), headers);
        }

        HttpClient& HttpClient::addHeader(const std::string &key, const std::string &value) {
            _headers[key] = value;
            return *this;
        }

        HttpClient& HttpClient::removeHeader(const std::string &key) {
            _headers.erase(key);
            return *this;
        }

        HttpRequest HttpClient::createRequest(api::HttpMethod method, const std::string &path,
                                              const std::experimental::optional<std::vector<uint8_t >> body,
                                              const std::unordered_map<std::string, std::string> &headers) {
          std::cout << "creating a fucking request 1" << std::endl;
            auto url = _baseUrl;
          std::cout << "creating a fucking request 2" << std::endl;
            if (path.front() == '/') {
                url += std::string(path.data() + 1);
            } else {
                url += path;
            }
          std::cout << "creating a fucking request 3" << std::endl;
            auto fullheaders = _headers;
            for (const auto& item : headers) {
                fullheaders[item.first] = item.second;
            }
          std::cout << "creating a fucking request 4" << std::endl;
            return HttpRequest(
                    method,
                    url,
                    fullheaders,
                    body,
                    _client,
                    _context,
                    _logger
            );
        }

        void HttpClient::setLogger(const std::shared_ptr<spdlog::logger> &logger) {
            _logger = make_option(logger);
        }

        HttpRequest::HttpRequest(api::HttpMethod method, const std::string &url,
                                 const std::unordered_map<std::string, std::string> &headers,
                                 const std::experimental::optional<std::vector<uint8_t >> body,
                                 const std::shared_ptr<api::HttpClient> &client,
                                 const std::shared_ptr<api::ExecutionContext> &context,
                                 const Option<std::shared_ptr<spdlog::logger>>& logger) {
            _method = method;
            _url = url;
            _headers = headers;
            _body = body;
            _client = client;
            _context = context;
            _logger = logger;
        }

        HttpRequest::ApiRequest::ApiRequest(const std::shared_ptr<const ledger::core::HttpRequest>& self) {
            _self = self;
        }

        std::shared_ptr<api::HttpRequest> HttpRequest::toApiRequest() const {
            auto request = std::shared_ptr<HttpRequest::ApiRequest>(new ApiRequest(std::make_shared<HttpRequest>(*this)));
            return std::dynamic_pointer_cast<api::HttpRequest>(request);
        }

        Future<std::shared_ptr<api::HttpUrlConnection>> HttpRequest::operator()() const {
          std::cout << "OPERATOR" << std::endl;
          std::cout << "core/src/net/HttpClient.cpp Future<std::shared_ptr<api::HttpUrlConnection>> HttpRequest::operator()() const { 1" << std::endl;
            auto request = std::dynamic_pointer_cast<ApiRequest>(toApiRequest());
          std::cout << "core/src/net/HttpClient.cpp Future<std::shared_ptr<api::HttpUrlConnection>> HttpRequest::operator()() const { 2" << std::endl;

          std::cout << "dumping the request" << std::endl;
          std::cout << request->getMethod() << std::endl;
          std::cout << request->getHeaders().size() << std::endl;
          std::cout << request->getBody().size() << std::endl;
          std::cout << request->getUrl() << std::endl;

            _client->execute(request);
          std::cout << "core/src/net/HttpClient.cpp Future<std::shared_ptr<api::HttpUrlConnection>> HttpRequest::operator()() const { 3" << std::endl;
            _logger.foreach([&] (const std::shared_ptr<spdlog::logger>& logger) {
                logger->info("{} {}", api::to_string(request->getMethod()), request->getUrl());
            });
          std::cout << "core/src/net/HttpClient.cpp Future<std::shared_ptr<api::HttpUrlConnection>> HttpRequest::operator()() const { 4" << std::endl;
            auto logger = _logger;
          std::cout << "core/src/net/HttpClient.cpp Future<std::shared_ptr<api::HttpUrlConnection>> HttpRequest::operator()() const { 5" << std::endl;
            return  request->getFuture().map<std::shared_ptr<api::HttpUrlConnection>>(_context, [=] (const std::shared_ptr<api::HttpUrlConnection>& connection) {

                std::cout << "core/src/net/HttpClient.cpp : HttpRequest::operator() map" << std::endl;

                logger.foreach([&] (const std::shared_ptr<spdlog::logger>& l) {
                    l->info("{} {} - {} {}", api::to_string(request->getMethod()), request->getUrl(),  connection->getStatusCode(), connection->getStatusText());
                });
          std::cout << "core/src/net/HttpClient.cpp operator 7" << std::endl;
                if (connection->getStatusCode() < 200 || connection->getStatusCode() >= 300) {
          std::cout << "core/src/net/HttpClient.cpp operator 8" << std::endl;
                    throw Exception(api::ErrorCode::HTTP_ERROR, connection->getStatusText(),
                                    Option<std::shared_ptr<void>>(std::static_pointer_cast<void>(connection)));
                }
                return connection;
            });
        }

        Future<HttpRequest::JsonResult> HttpRequest::json() const {
        std::cout << "Future<HttpRequest::JsonResult> HttpRequest::json() const { 1" << std::endl;
            return operator()().recover(_context, [] (const Exception& exception) {
        std::cout << "Future<HttpRequest::JsonResult> HttpRequest::json() const { 2" << std::endl;
          std::cout << exception.getErrorCode() << std::endl;
                if (exception.getErrorCode() == api::ErrorCode::HTTP_ERROR && exception.getUserData().nonEmpty()) {
                    return std::static_pointer_cast<api::HttpUrlConnection>(exception.getUserData().getValue());
                }
                std::cout << "blibliblibl" << std::endl;
                throw exception;
            }).map<JsonResult>
                    (_context, [] (const std::shared_ptr<api::HttpUrlConnection>& co) {
                        std::cout << "core/src/net/HttpClient.cpp : HttpRequest::json()" << std::endl;
                        std::shared_ptr<api::HttpUrlConnection> connection = co;

                        // std::string toto = std::string("{ token: '5611bbb1-e5cf-4304-b35c-557fb48a39b4' }");

                        auto bodyResult = connection->readBody();
                        // std::cout << "bodyResult.error " << bodyResult.error << std::endl;
                        // auto bodyResultStr = hex::toString((*(bodyResult.data)));
                        auto bodyResultStr = std::string((char *)(*(bodyResult.data)).data());
                        std::cout << "bodyResult.data " << (*(bodyResult.data)).size() << std::endl;
                        std::cout << "bodyResult.data " << bodyResultStr << std::endl;

                        // auto bodyResultStr1 = std::string((char *)(*(bodyResult.data)).data());
                        // std::cout << "bodyResult1.data " << bodyResultStr1 << std::endl;

                        std::cout << "core/src/net/HttpClient.cpp : HttpRequest::json() before rapid json" << std::endl;
                        auto doc = std::make_shared<rapidjson::Document>();
                        HttpUrlConnectionInputStream is(connection);
                        std::cout << "core/src/net/HttpClient.cpp : HttpRequest::json() before parse stream" << std::endl;
                        doc->ParseStream(is);
                        std::cout << "core/src/net/HttpClient.cpp : HttpRequest::json() after parse stream" << std::endl;
                        std::shared_ptr<JsonResult> result(new std::tuple<std::shared_ptr<api::HttpUrlConnection>, std::shared_ptr<rapidjson::Document>>(std::make_tuple(connection, doc)));
                        std::cout << "core/src/net/HttpClient.cpp : HttpRequest::json() getStatus: " << connection->getStatusCode() << std::endl;
                        if (connection->getStatusCode() < 200 || connection->getStatusCode() >= 300) {
          std::cout << "hello i am in json 6" << std::endl;
                            throw Exception(api::ErrorCode::HTTP_ERROR, connection->getStatusText(),
                                            Option<std::shared_ptr<void>>(std::static_pointer_cast<void>(result)));
                        }
                        std::cout << "core/src/net/HttpClient.cpp : HttpRequest::json() after get status " << std::endl;
                        return std::make_tuple(connection, doc);
            });
        }

        api::HttpMethod HttpRequest::ApiRequest::getMethod() {
            return _self->_method;
        }

        std::unordered_map<std::string, std::string> HttpRequest::ApiRequest::getHeaders() {
            return _self->_headers;
        }

        std::vector<uint8_t> HttpRequest::ApiRequest::getBody() {
            return _self->_body.value_or(std::vector<uint8_t>());
        }

        std::string HttpRequest::ApiRequest::getUrl() {
            return _self->_url;
        }

        HttpRequest::ApiRequest::~ApiRequest() {

        }

        void HttpRequest::ApiRequest::complete(const std::shared_ptr<api::HttpUrlConnection> &response,
                                               const optional<api::Error> &error) {
            if (error) {
                _promise.failure(Exception(error->code, error->message));
            } else {
                _promise.success(response);
            }
        }

        Future<std::shared_ptr<api::HttpUrlConnection>> HttpRequest::ApiRequest::getFuture() const {
          std::cout << "GETTING FUTURE" << std::endl;
            return _promise.getFuture();
        }
    }


}
