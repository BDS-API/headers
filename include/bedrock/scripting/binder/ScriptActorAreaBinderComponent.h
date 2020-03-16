#pragma once

#include "../../actor/unmapped/ActorUniqueID.h"
#include "ScriptBinderComponent.h"


class ScriptActorAreaBinderComponent : public ScriptBinderComponent {

public:
    static std::string TAG;

    virtual ~ScriptActorAreaBinderComponent(); // _ZN30ScriptActorAreaBinderComponentD2Ev
    virtual void __fake_function0(); // fake
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const; // _ZNK30ScriptActorAreaBinderComponent9serializeER12ScriptEngineRKN9ScriptApi18ScriptObjectHandleE
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&); // _ZN30ScriptActorAreaBinderComponent11deserializeER12ScriptEngineRKN9ScriptApi18ScriptObjectHandleE
    ScriptActorAreaBinderComponent(); // _ZN30ScriptActorAreaBinderComponentC2Ev
    ScriptActorAreaBinderComponent(ActorUniqueID); // _ZN30ScriptActorAreaBinderComponentC2E13ActorUniqueID
    ScriptActorAreaBinderComponent(ITickingArea const&); // _ZN30ScriptActorAreaBinderComponentC2ERK12ITickingArea
    void getIdentifier()const; // _ZNK30ScriptActorAreaBinderComponent13getIdentifierEv
};
