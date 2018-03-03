// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from dynamic.djinni

#include "NJSDynamicArrayCpp.hpp"

using namespace v8;
using namespace node;
using namespace std;

NAN_METHOD(NJSDynamicArray::size) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSDynamicArray::size needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSDynamicArray* obj = Nan::ObjectWrap::Unwrap<NJSDynamicArray>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDynamicArray::size : implementation of DynamicArray is not valid");
    }

    auto result = cpp_impl->size();

    //Wrap result in node object
    auto arg_0 = Nan::New<Number>(result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSDynamicArray::getString) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSDynamicArray::getString needs 1 arguments");
    }

    //Check if parameters have correct types
    auto arg_0 = Nan::To<int64_t>(info[0]).FromJust();

    //Unwrap current object and retrieve its Cpp Implementation
    NJSDynamicArray* obj = Nan::ObjectWrap::Unwrap<NJSDynamicArray>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDynamicArray::getString : implementation of DynamicArray is not valid");
    }

    auto result = cpp_impl->getString(arg_0);

    //Wrap result in node object
    auto arg_1 = Nan::New<String>((*result)).ToLocalChecked();

    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSDynamicArray::getInt) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSDynamicArray::getInt needs 1 arguments");
    }

    //Check if parameters have correct types
    auto arg_0 = Nan::To<int64_t>(info[0]).FromJust();

    //Unwrap current object and retrieve its Cpp Implementation
    NJSDynamicArray* obj = Nan::ObjectWrap::Unwrap<NJSDynamicArray>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDynamicArray::getInt : implementation of DynamicArray is not valid");
    }

    auto result = cpp_impl->getInt(arg_0);

    //Wrap result in node object
    auto arg_1 = Nan::New<Int32>((*result));

    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSDynamicArray::getLong) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSDynamicArray::getLong needs 1 arguments");
    }

    //Check if parameters have correct types
    auto arg_0 = Nan::To<int64_t>(info[0]).FromJust();

    //Unwrap current object and retrieve its Cpp Implementation
    NJSDynamicArray* obj = Nan::ObjectWrap::Unwrap<NJSDynamicArray>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDynamicArray::getLong : implementation of DynamicArray is not valid");
    }

    auto result = cpp_impl->getLong(arg_0);

    //Wrap result in node object
    auto arg_1 = Nan::New<Number>((*result));

    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSDynamicArray::getDouble) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSDynamicArray::getDouble needs 1 arguments");
    }

    //Check if parameters have correct types
    auto arg_0 = Nan::To<int64_t>(info[0]).FromJust();

    //Unwrap current object and retrieve its Cpp Implementation
    NJSDynamicArray* obj = Nan::ObjectWrap::Unwrap<NJSDynamicArray>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDynamicArray::getDouble : implementation of DynamicArray is not valid");
    }

    auto result = cpp_impl->getDouble(arg_0);

    //Wrap result in node object
    auto arg_1 = Nan::New<Number>((*result));

    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSDynamicArray::getData) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSDynamicArray::getData needs 1 arguments");
    }

    //Check if parameters have correct types
    auto arg_0 = Nan::To<int64_t>(info[0]).FromJust();

    //Unwrap current object and retrieve its Cpp Implementation
    NJSDynamicArray* obj = Nan::ObjectWrap::Unwrap<NJSDynamicArray>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDynamicArray::getData : implementation of DynamicArray is not valid");
    }

    auto result = cpp_impl->getData(arg_0);

    //Wrap result in node object
    Local<Array> arg_1 = Nan::New<Array>();
    for(size_t i = 0; i < (*result).size(); i++)
    {
        auto arg_1_elem = Nan::New<Uint32>((*result)[i]);
        arg_1->Set((int)i,arg_1_elem);
    }


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSDynamicArray::getBoolean) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSDynamicArray::getBoolean needs 1 arguments");
    }

    //Check if parameters have correct types
    auto arg_0 = Nan::To<int64_t>(info[0]).FromJust();

    //Unwrap current object and retrieve its Cpp Implementation
    NJSDynamicArray* obj = Nan::ObjectWrap::Unwrap<NJSDynamicArray>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDynamicArray::getBoolean : implementation of DynamicArray is not valid");
    }

    auto result = cpp_impl->getBoolean(arg_0);

    //Wrap result in node object
    auto arg_1 = Nan::New<Boolean>((*result));

    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSDynamicArray::pushInt) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSDynamicArray::pushInt needs 1 arguments");
    }

    //Check if parameters have correct types
    auto arg_0 = Nan::To<int32_t>(info[0]).FromJust();

    //Unwrap current object and retrieve its Cpp Implementation
    NJSDynamicArray* obj = Nan::ObjectWrap::Unwrap<NJSDynamicArray>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDynamicArray::pushInt : implementation of DynamicArray is not valid");
    }

    auto result = cpp_impl->pushInt(arg_0);

    //Wrap result in node object
    auto arg_1 = NJSDynamicArray::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSDynamicArray::pushLong) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSDynamicArray::pushLong needs 1 arguments");
    }

    //Check if parameters have correct types
    auto arg_0 = Nan::To<int64_t>(info[0]).FromJust();

    //Unwrap current object and retrieve its Cpp Implementation
    NJSDynamicArray* obj = Nan::ObjectWrap::Unwrap<NJSDynamicArray>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDynamicArray::pushLong : implementation of DynamicArray is not valid");
    }

    auto result = cpp_impl->pushLong(arg_0);

    //Wrap result in node object
    auto arg_1 = NJSDynamicArray::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSDynamicArray::pushString) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSDynamicArray::pushString needs 1 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);

    //Unwrap current object and retrieve its Cpp Implementation
    NJSDynamicArray* obj = Nan::ObjectWrap::Unwrap<NJSDynamicArray>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDynamicArray::pushString : implementation of DynamicArray is not valid");
    }

    auto result = cpp_impl->pushString(arg_0);

    //Wrap result in node object
    auto arg_1 = NJSDynamicArray::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSDynamicArray::pushDouble) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSDynamicArray::pushDouble needs 1 arguments");
    }

    //Check if parameters have correct types
    auto arg_0 = Nan::To<double>(info[0]).FromJust();

    //Unwrap current object and retrieve its Cpp Implementation
    NJSDynamicArray* obj = Nan::ObjectWrap::Unwrap<NJSDynamicArray>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDynamicArray::pushDouble : implementation of DynamicArray is not valid");
    }

    auto result = cpp_impl->pushDouble(arg_0);

    //Wrap result in node object
    auto arg_1 = NJSDynamicArray::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSDynamicArray::pushData) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSDynamicArray::pushData needs 1 arguments");
    }

    //Check if parameters have correct types
    vector<uint8_t> arg_0;
    Local<Array> arg_0_container = Local<Array>::Cast(info[0]);
    for(uint32_t i = 0; i < arg_0_container->Length(); i++)
    {
        if(arg_0_container->Get(i)->IsUint32())
        {
            auto arg_0_elem = Nan::To<uint32_t>(arg_0_container->Get(i)->ToUint32()).FromJust();
            arg_0.emplace_back(arg_0_elem);
        }
    }


    //Unwrap current object and retrieve its Cpp Implementation
    NJSDynamicArray* obj = Nan::ObjectWrap::Unwrap<NJSDynamicArray>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDynamicArray::pushData : implementation of DynamicArray is not valid");
    }

    auto result = cpp_impl->pushData(arg_0);

    //Wrap result in node object
    auto arg_1 = NJSDynamicArray::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSDynamicArray::pushBoolean) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSDynamicArray::pushBoolean needs 1 arguments");
    }

    //Check if parameters have correct types
    auto arg_0 = Nan::To<bool>(info[0]).FromJust();

    //Unwrap current object and retrieve its Cpp Implementation
    NJSDynamicArray* obj = Nan::ObjectWrap::Unwrap<NJSDynamicArray>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDynamicArray::pushBoolean : implementation of DynamicArray is not valid");
    }

    auto result = cpp_impl->pushBoolean(arg_0);

    //Wrap result in node object
    auto arg_1 = NJSDynamicArray::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSDynamicArray::getObject) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSDynamicArray::getObject needs 1 arguments");
    }

    //Check if parameters have correct types
    auto arg_0 = Nan::To<int64_t>(info[0]).FromJust();

    //Unwrap current object and retrieve its Cpp Implementation
    NJSDynamicArray* obj = Nan::ObjectWrap::Unwrap<NJSDynamicArray>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDynamicArray::getObject : implementation of DynamicArray is not valid");
    }

    auto result = cpp_impl->getObject(arg_0);

    //Wrap result in node object
    auto arg_1 = NJSDynamicObject::wrap((*result));


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSDynamicArray::getArray) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSDynamicArray::getArray needs 1 arguments");
    }

    //Check if parameters have correct types
    auto arg_0 = Nan::To<int64_t>(info[0]).FromJust();

    //Unwrap current object and retrieve its Cpp Implementation
    NJSDynamicArray* obj = Nan::ObjectWrap::Unwrap<NJSDynamicArray>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDynamicArray::getArray : implementation of DynamicArray is not valid");
    }

    auto result = cpp_impl->getArray(arg_0);

    //Wrap result in node object
    auto arg_1 = NJSDynamicArray::wrap((*result));


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSDynamicArray::pushObject) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSDynamicArray::pushObject needs 1 arguments");
    }

    Isolate *isolate = info.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(context).ToLocalChecked();
    NJSDynamicObject *njs_ptr_arg_0 = static_cast<NJSDynamicObject *>(Nan::GetInternalFieldPointer(njs_arg_0,0));
    std::shared_ptr<NJSDynamicObject> arg_0(njs_ptr_arg_0);


    //Unwrap current object and retrieve its Cpp Implementation
    NJSDynamicArray* obj = Nan::ObjectWrap::Unwrap<NJSDynamicArray>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDynamicArray::pushObject : implementation of DynamicArray is not valid");
    }

    auto result = cpp_impl->pushObject(arg_0);

    //Wrap result in node object
    auto arg_1 = NJSDynamicArray::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSDynamicArray::pushArray) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSDynamicArray::pushArray needs 1 arguments");
    }

    Isolate *isolate = info.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(context).ToLocalChecked();
    NJSDynamicArray *njs_ptr_arg_0 = static_cast<NJSDynamicArray *>(Nan::GetInternalFieldPointer(njs_arg_0,0));
    std::shared_ptr<NJSDynamicArray> arg_0(njs_ptr_arg_0);


    //Unwrap current object and retrieve its Cpp Implementation
    NJSDynamicArray* obj = Nan::ObjectWrap::Unwrap<NJSDynamicArray>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDynamicArray::pushArray : implementation of DynamicArray is not valid");
    }

    auto result = cpp_impl->pushArray(arg_0);

    //Wrap result in node object
    auto arg_1 = NJSDynamicArray::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSDynamicArray::concat) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSDynamicArray::concat needs 1 arguments");
    }

    Isolate *isolate = info.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(context).ToLocalChecked();
    NJSDynamicArray *njs_ptr_arg_0 = static_cast<NJSDynamicArray *>(Nan::GetInternalFieldPointer(njs_arg_0,0));
    std::shared_ptr<NJSDynamicArray> arg_0(njs_ptr_arg_0);


    //Unwrap current object and retrieve its Cpp Implementation
    NJSDynamicArray* obj = Nan::ObjectWrap::Unwrap<NJSDynamicArray>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDynamicArray::concat : implementation of DynamicArray is not valid");
    }

    auto result = cpp_impl->concat(arg_0);

    //Wrap result in node object
    auto arg_1 = NJSDynamicArray::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSDynamicArray::getType) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSDynamicArray::getType needs 1 arguments");
    }

    //Check if parameters have correct types
    auto arg_0 = Nan::To<int64_t>(info[0]).FromJust();

    //Unwrap current object and retrieve its Cpp Implementation
    NJSDynamicArray* obj = Nan::ObjectWrap::Unwrap<NJSDynamicArray>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDynamicArray::getType : implementation of DynamicArray is not valid");
    }

    auto result = cpp_impl->getType(arg_0);

    //Wrap result in node object
    auto arg_1 = Nan::New<Integer>((int)(*result));

    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSDynamicArray::remove) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSDynamicArray::remove needs 1 arguments");
    }

    //Check if parameters have correct types
    auto arg_0 = Nan::To<int64_t>(info[0]).FromJust();

    //Unwrap current object and retrieve its Cpp Implementation
    NJSDynamicArray* obj = Nan::ObjectWrap::Unwrap<NJSDynamicArray>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDynamicArray::remove : implementation of DynamicArray is not valid");
    }

    auto result = cpp_impl->remove(arg_0);

    //Wrap result in node object
    auto arg_1 = Nan::New<Boolean>(result);

    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSDynamicArray::dump) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSDynamicArray::dump needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSDynamicArray* obj = Nan::ObjectWrap::Unwrap<NJSDynamicArray>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDynamicArray::dump : implementation of DynamicArray is not valid");
    }

    auto result = cpp_impl->dump();

    //Wrap result in node object
    auto arg_0 = Nan::New<String>(result).ToLocalChecked();

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSDynamicArray::serialize) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSDynamicArray::serialize needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSDynamicArray* obj = Nan::ObjectWrap::Unwrap<NJSDynamicArray>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDynamicArray::serialize : implementation of DynamicArray is not valid");
    }

    auto result = cpp_impl->serialize();

    //Wrap result in node object
    Local<Array> arg_0 = Nan::New<Array>();
    for(size_t i = 0; i < result.size(); i++)
    {
        auto arg_0_elem = Nan::New<Uint32>(result[i]);
        arg_0->Set((int)i,arg_0_elem);
    }


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSDynamicArray::isReadOnly) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSDynamicArray::isReadOnly needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSDynamicArray* obj = Nan::ObjectWrap::Unwrap<NJSDynamicArray>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDynamicArray::isReadOnly : implementation of DynamicArray is not valid");
    }

    auto result = cpp_impl->isReadOnly();

    //Wrap result in node object
    auto arg_0 = Nan::New<Boolean>(result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSDynamicArray::newInstance) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSDynamicArray::newInstance needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSDynamicArray* obj = Nan::ObjectWrap::Unwrap<NJSDynamicArray>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDynamicArray::newInstance : implementation of DynamicArray is not valid");
    }

    auto result = cpp_impl->newInstance();

    //Wrap result in node object
    auto arg_0 = NJSDynamicArray::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSDynamicArray::load) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSDynamicArray::load needs 1 arguments");
    }

    //Check if parameters have correct types
    vector<uint8_t> arg_0;
    Local<Array> arg_0_container = Local<Array>::Cast(info[0]);
    for(uint32_t i = 0; i < arg_0_container->Length(); i++)
    {
        if(arg_0_container->Get(i)->IsUint32())
        {
            auto arg_0_elem = Nan::To<uint32_t>(arg_0_container->Get(i)->ToUint32()).FromJust();
            arg_0.emplace_back(arg_0_elem);
        }
    }


    //Unwrap current object and retrieve its Cpp Implementation
    NJSDynamicArray* obj = Nan::ObjectWrap::Unwrap<NJSDynamicArray>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDynamicArray::load : implementation of DynamicArray is not valid");
    }

    auto result = cpp_impl->load(arg_0);

    //Wrap result in node object
    auto arg_1 = NJSDynamicArray::wrap((*result));


    //Return result
    info.GetReturnValue().Set(arg_1);
}

NAN_METHOD(NJSDynamicArray::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSDynamicArray function can only be called as constructor (use New)");
    }

    Isolate *isolate = info.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();

    //Check if NJSDynamicArray::New called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSDynamicArray::New needs same number of arguments as ledger::core::api::DynamicArray::pushInt method");
    }

    //Unwrap objects to get C++ classes
    auto arg_0 = Nan::To<int32_t>(info[0]).FromJust();

    //Call factory
    auto cpp_instance = ledger::core::api::DynamicArray::pushInt(arg_0);
    NJSDynamicArray *node_instance = new NJSDynamicArray(cpp_instance);

    if(node_instance)
    {
        //Wrap and return node instance
        node_instance->Wrap(info.This());
        node_instance->Ref();
        info.GetReturnValue().Set(info.This());
    }
}


Nan::Persistent<ObjectTemplate> NJSDynamicArray::DynamicArray_prototype;

Handle<Object> NJSDynamicArray::wrap(const std::shared_ptr<ledger::core::api::DynamicArray> &object) {
    Local<ObjectTemplate> local_prototype = Nan::New(DynamicArray_prototype);

    Handle<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance();
        NJSDynamicArray *new_obj = new NJSDynamicArray(object);
        if(new_obj)
        {
            new_obj->Wrap(obj);
            new_obj->Ref();
        }
    }
    else
    {
        Nan::ThrowError("NJSDynamicArray::wrap: object template not valid");
    }
    return obj;
}

void NJSDynamicArray::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSDynamicArray::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSDynamicArray").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"size", size);
    Nan::SetPrototypeMethod(func_template,"getString", getString);
    Nan::SetPrototypeMethod(func_template,"getInt", getInt);
    Nan::SetPrototypeMethod(func_template,"getLong", getLong);
    Nan::SetPrototypeMethod(func_template,"getDouble", getDouble);
    Nan::SetPrototypeMethod(func_template,"getData", getData);
    Nan::SetPrototypeMethod(func_template,"getBoolean", getBoolean);
    Nan::SetPrototypeMethod(func_template,"pushInt", pushInt);
    Nan::SetPrototypeMethod(func_template,"pushLong", pushLong);
    Nan::SetPrototypeMethod(func_template,"pushString", pushString);
    Nan::SetPrototypeMethod(func_template,"pushDouble", pushDouble);
    Nan::SetPrototypeMethod(func_template,"pushData", pushData);
    Nan::SetPrototypeMethod(func_template,"pushBoolean", pushBoolean);
    Nan::SetPrototypeMethod(func_template,"getObject", getObject);
    Nan::SetPrototypeMethod(func_template,"getArray", getArray);
    Nan::SetPrototypeMethod(func_template,"pushObject", pushObject);
    Nan::SetPrototypeMethod(func_template,"pushArray", pushArray);
    Nan::SetPrototypeMethod(func_template,"concat", concat);
    Nan::SetPrototypeMethod(func_template,"getType", getType);
    Nan::SetPrototypeMethod(func_template,"remove", remove);
    Nan::SetPrototypeMethod(func_template,"dump", dump);
    Nan::SetPrototypeMethod(func_template,"serialize", serialize);
    Nan::SetPrototypeMethod(func_template,"isReadOnly", isReadOnly);
    //Set object prototype
    DynamicArray_prototype.Reset(objectTemplate);

    //Add template to target
    target->Set(Nan::New<String>("NJSDynamicArray").ToLocalChecked(), func_template->GetFunction());
}