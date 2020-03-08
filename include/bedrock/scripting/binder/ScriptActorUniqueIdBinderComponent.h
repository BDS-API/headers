#pragma once

#include "../../actor/Actor"
#include "../unmapped/ScriptEngine"
#include "../../actor/unmapped/ActorUniqueID"
#include "../ScriptObjectHandle"
#include "../../actor/ItemActor"


class ScriptActorUniqueIdBinderComponent : ScriptBinderComponent {

public:
    static long TAG[abi:cxx11];

    ScriptActorUniqueIdBinderComponent::~ScriptActorUniqueIdBinderComponent()
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);

    ScriptActorUniqueIdBinderComponent(void);
    ScriptActorUniqueIdBinderComponent(ActorUniqueID);
    ScriptActorUniqueIdBinderComponent(Actor const&);
    ScriptActorUniqueIdBinderComponent(ItemActor const&);
    void getIdentifier()const;
};
