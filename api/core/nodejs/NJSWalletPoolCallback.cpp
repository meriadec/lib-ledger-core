// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#include "NJSWalletPoolCallback.hpp"

using namespace v8;
using namespace node;
using namespace std;

void NJSWalletPoolCallback::onCallback(const std::shared_ptr<WalletPool> & result, const std::experimental::optional<Error> & error)
{
    //Wrap parameters
    auto arg_0 = NJSWalletPool::wrap((*result));

    auto arg_1 = Nan::New<Object>();
    auto arg_1_1 = Nan::New<Integer>((int)(*error).code);
    Nan::DefineOwnProperty(arg_1, Nan::New<String>("code").ToLocalChecked(), arg_1_1);
    auto arg_1_2 = Nan::New<String>((*error).message).ToLocalChecked();
    Nan::DefineOwnProperty(arg_1, Nan::New<String>("message").ToLocalChecked(), arg_1_2);

    Handle<Value> args[2] = {arg_0,arg_1};
    Local<Object> local_njs_impl = Nan::New<Object>(njs_impl);
    if(!local_njs_impl->IsObject())
    {
        Nan::ThrowError("NJSWalletPoolCallback::onCallback fail to retrieve node implementation");
    }
    auto calling_funtion = Nan::Get(local_njs_impl,Nan::New<String>("onCallback").ToLocalChecked()).ToLocalChecked();
    auto handle = this->handle();
    auto result_onCallback = Nan::CallAsFunction(calling_funtion->ToObject(),handle,2,args);
    if(result_onCallback.IsEmpty())
    {
        Nan::ThrowError("NJSWalletPoolCallback::onCallback call failed");
    }
}

NAN_METHOD(NJSWalletPoolCallback::addRef) {

    NJSWalletPoolCallback *obj = Nan::ObjectWrap::Unwrap<NJSWalletPoolCallback>(info.This());
    obj->Ref();
}

NAN_METHOD(NJSWalletPoolCallback::removeRef) {

    NJSWalletPoolCallback *obj = Nan::ObjectWrap::Unwrap<NJSWalletPoolCallback>(info.This());
    obj->Unref();
}

NAN_METHOD(NJSWalletPoolCallback::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSWalletPoolCallback function can only be called as constructor (use New)");
    }

    NJSWalletPoolCallback *node_instance = nullptr;
    if(info[0]->IsObject())
    {
        node_instance = new NJSWalletPoolCallback(info[0]->ToObject());
    }
    else
    {
        return Nan::ThrowError("NJSWalletPoolCallback::New requires an implementation from node");
    }

    if(node_instance)
    {
        //Wrap and return node instance
        node_instance->Wrap(info.This());
        node_instance->Ref();
        info.GetReturnValue().Set(info.This());
    }
}

void NJSWalletPoolCallback::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSWalletPoolCallback::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSWalletPoolCallback").ToLocalChecked());
    Nan::SetPrototypeMethod(func_template,"addRef", addRef);
    Nan::SetPrototypeMethod(func_template,"removeRef", removeRef);

    //Add template to target
    target->Set(Nan::New<String>("NJSWalletPoolCallback").ToLocalChecked(), func_template->GetFunction());
}