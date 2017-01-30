// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from configuration.djinni

#pragma once

#include <cstdint>
#include <memory>
#include <string>
#include <vector>

namespace ledger { namespace core { namespace api {

class Configuration {
public:
    virtual ~Configuration() {}

    static std::string const KEYCHAIN_OBSERVABLE_RANGE;

    virtual std::string getString(const std::string & key, const std::string & fallback) = 0;

    virtual std::shared_ptr<Configuration> putString(const std::string & key, const std::string & value) = 0;

    virtual int32_t getInt(const std::string & key, int32_t fallback) = 0;

    virtual std::shared_ptr<Configuration> putInt(const std::string & key, int32_t value) = 0;

    virtual bool getBoolean(const std::string & key, bool fallback) = 0;

    virtual std::shared_ptr<Configuration> putBoolean(const std::string & key, bool value) = 0;

    virtual std::vector<uint8_t> getData(const std::string & key, const std::vector<uint8_t> & fallback) = 0;

    virtual std::shared_ptr<Configuration> putData(const std::string & key, const std::vector<uint8_t> & data) = 0;

    static std::shared_ptr<Configuration> newInstance();
};

} } }  // namespace ledger::core::api
