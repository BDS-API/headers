#pragma once

#include <string>


class ScriptObjectBinder {

public:
    static std::string TYPE_TAG;

    void extract(ScriptEngine &, ScriptApi::ScriptObjectHandle const&); // _ZN18ScriptObjectBinder7extractER12ScriptEngineRKN9ScriptApi18ScriptObjectHandleE
    ScriptObjectBinder(std::string const&); // _ZN18ScriptObjectBinderC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    ~ScriptObjectBinder(); // _ZN18ScriptObjectBinderD2Ev
    std::string getTypeIdentifier()const; // _ZNK18ScriptObjectBinder17getTypeIdentifierB5cxx11Ev
    void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const; // _ZNK18ScriptObjectBinder9serializeER12ScriptEngineRN9ScriptApi18ScriptObjectHandleE
    void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const; // _ZNK18ScriptObjectBinder11deserializeER12ScriptEngineRKN9ScriptApi18ScriptObjectHandleE
    void _getComponentIndex(unsigned short)const; // _ZNK18ScriptObjectBinder18_getComponentIndexEt
    void _hasComponent(unsigned short)const; // _ZNK18ScriptObjectBinder13_hasComponentEt
};
