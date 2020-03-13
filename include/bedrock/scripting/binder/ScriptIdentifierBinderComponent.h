#pragma once

#include <string>
#include "ScriptBinderComponent.h"


class ScriptIdentifierBinderComponent : ScriptBinderComponent {

public:
    static std::string TAG;

    ~ScriptIdentifierBinderComponent(); // _ZN31ScriptIdentifierBinderComponentD2Ev
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const; // _ZNK31ScriptIdentifierBinderComponent9serializeER12ScriptEngineRKN9ScriptApi18ScriptObjectHandleE
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&); // _ZN31ScriptIdentifierBinderComponent11deserializeER12ScriptEngineRKN9ScriptApi18ScriptObjectHandleE
    ScriptIdentifierBinderComponent(); // _ZN31ScriptIdentifierBinderComponentC2Ev
    ScriptIdentifierBinderComponent(std::string const&); // _ZN31ScriptIdentifierBinderComponentC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    ScriptIdentifierBinderComponent(Actor const&); // _ZN31ScriptIdentifierBinderComponentC2ERK5Actor
    ScriptIdentifierBinderComponent(ItemActor const&); // _ZN31ScriptIdentifierBinderComponentC2ERK9ItemActor
    ScriptIdentifierBinderComponent(ItemInstance const&); // _ZN31ScriptIdentifierBinderComponentC2ERK12ItemInstance
    ScriptIdentifierBinderComponent(Block const&); // _ZN31ScriptIdentifierBinderComponentC2ERK5Block
    std::string getIdentifier()const; // _ZNK31ScriptIdentifierBinderComponent13getIdentifierB5cxx11Ev
};
