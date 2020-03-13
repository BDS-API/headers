#pragma once

#include "ScriptBinderComponent.h"


class ScriptQueryBinderComponent : ScriptBinderComponent {

public:
    static std::string TAG;

    ~ScriptQueryBinderComponent(); // _ZN26ScriptQueryBinderComponentD2Ev
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const; // _ZNK26ScriptQueryBinderComponent9serializeER12ScriptEngineRKN9ScriptApi18ScriptObjectHandleE
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&); // _ZN26ScriptQueryBinderComponent11deserializeER12ScriptEngineRKN9ScriptApi18ScriptObjectHandleE
    ScriptQueryBinderComponent(); // _ZN26ScriptQueryBinderComponentC2Ev
    ScriptQueryBinderComponent(unsigned int); // _ZN26ScriptQueryBinderComponentC2Ej
    void getIdentifier()const; // _ZNK26ScriptQueryBinderComponent13getIdentifierEv
};
