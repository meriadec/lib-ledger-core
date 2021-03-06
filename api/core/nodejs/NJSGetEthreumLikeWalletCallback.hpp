// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from ethereum_like_wallet.djinni

#ifndef DJINNI_GENERATED_NJSGETETHREUMLIKEWALLETCALLBACK_HPP
#define DJINNI_GENERATED_NJSGETETHREUMLIKEWALLETCALLBACK_HPP


#include "../../../core/src/api/Error.hpp"
#include "../../../core/src/api/EthereumLikeWallet.hpp"
#include "NJSEthereumLikeWalletCpp.hpp"
#include <memory>

#include <nan.h>
#include <node.h>
#include "../../../core/src/api/GetEthreumLikeWalletCallback.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSGetEthreumLikeWalletCallback: public Nan::ObjectWrap, public ledger::core::api::GetEthreumLikeWalletCallback {
public:

    static void Initialize(Local<Object> target);
    ~NJSGetEthreumLikeWalletCallback()
    {
        persistent().Reset();
        njs_impl.Reset();
        njs_impl.Reset();
    };
    NJSGetEthreumLikeWalletCallback(Local<Object> njs_implementation){njs_impl.Reset(njs_implementation);};

    void onSuccess(const std::shared_ptr<EthereumLikeWallet> & wallet, bool isCreated);

    void onError(const Error & error);

private:
    static NAN_METHOD(onSuccess);

    static NAN_METHOD(onError);

    static NAN_METHOD(New);

    static NAN_METHOD(addRef);
    static NAN_METHOD(removeRef);
    Nan::Persistent<Object> njs_impl;
};
#endif //DJINNI_GENERATED_NJSGETETHREUMLIKEWALLETCALLBACK_HPP
