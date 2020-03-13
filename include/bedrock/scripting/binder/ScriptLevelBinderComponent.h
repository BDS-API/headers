#pragma once

#include "ScriptBinderComponent.h"


class ScriptLevelBinderComponent : ScriptBinderComponent {

public:
    static std::string TAG;

    ~ScriptLevelBinderComponent(); // _ZN26ScriptLevelBinderComponentD2Ev
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const; // _ZNK26ScriptLevelBinderComponent9serializeER12ScriptEngineRKN9ScriptApi18ScriptObjectHandleE
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&); // _ZN26ScriptLevelBinderComponent11deserializeER12ScriptEngineRKN9ScriptApi18ScriptObjectHandleE
    ScriptLevelBinderComponent(); // _ZN26ScriptLevelBinderComponentC2Ev
    ScriptLevelBinderComponent(unsigned int); // _ZN26ScriptLevelBinderComponentC2Ej
    void getIdentifier()const; // _ZNK26ScriptLevelBinderComponent13getIdentifierEv
};
