#pragma once

#include "ScriptBinderComponent.h"


class ScriptLevelAreaBinderComponent : ScriptBinderComponent {

public:
    static std::string TAG;

    ~ScriptLevelAreaBinderComponent(); // _ZN30ScriptLevelAreaBinderComponentD2Ev
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const; // _ZNK30ScriptLevelAreaBinderComponent9serializeER12ScriptEngineRKN9ScriptApi18ScriptObjectHandleE
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&); // _ZN30ScriptLevelAreaBinderComponent11deserializeER12ScriptEngineRKN9ScriptApi18ScriptObjectHandleE
    ScriptLevelAreaBinderComponent(); // _ZN30ScriptLevelAreaBinderComponentC2Ev
    ScriptLevelAreaBinderComponent(mce::UUID const&); // _ZN30ScriptLevelAreaBinderComponentC2ERKN3mce4UUIDE
    ScriptLevelAreaBinderComponent(ITickingArea const&); // _ZN30ScriptLevelAreaBinderComponentC2ERK12ITickingArea
    void getIdentifier()const; // _ZNK30ScriptLevelAreaBinderComponent13getIdentifierEv
};
