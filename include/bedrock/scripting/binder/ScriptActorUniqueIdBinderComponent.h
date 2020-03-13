#pragma once

#include "ScriptBinderComponent.h"
#include "../../actor/unmapped/ActorUniqueID.h"


class ScriptActorUniqueIdBinderComponent : ScriptBinderComponent {

public:
    static std::string TAG;

    ~ScriptActorUniqueIdBinderComponent(); // _ZN34ScriptActorUniqueIdBinderComponentD2Ev
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const; // _ZNK34ScriptActorUniqueIdBinderComponent9serializeER12ScriptEngineRKN9ScriptApi18ScriptObjectHandleE
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&); // _ZN34ScriptActorUniqueIdBinderComponent11deserializeER12ScriptEngineRKN9ScriptApi18ScriptObjectHandleE
    ScriptActorUniqueIdBinderComponent(); // _ZN34ScriptActorUniqueIdBinderComponentC2Ev
    ScriptActorUniqueIdBinderComponent(ActorUniqueID); // _ZN34ScriptActorUniqueIdBinderComponentC2E13ActorUniqueID
    ScriptActorUniqueIdBinderComponent(Actor const&); // _ZN34ScriptActorUniqueIdBinderComponentC2ERK5Actor
    ScriptActorUniqueIdBinderComponent(ItemActor const&); // _ZN34ScriptActorUniqueIdBinderComponentC2ERK9ItemActor
    void getIdentifier()const; // _ZNK34ScriptActorUniqueIdBinderComponent13getIdentifierEv
};
