#pragma once

#include "../../../unmapped/ScriptEngine"
#include "../../../unmapped/ActorUniqueID"
#include "../../actor/Actor"
#include "../../actor/ItemActor"


class ScriptActorUniqueIdBinderComponent : ScriptBinderComponent {

public:
    static long TAG[abi:cxx11];

    virtual ScriptActorUniqueIdBinderComponent::~ScriptActorUniqueIdBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);

    ScriptActorUniqueIdBinderComponent(void);
    ScriptActorUniqueIdBinderComponent(ActorUniqueID);
    ScriptActorUniqueIdBinderComponent(Actor const&);
    ScriptActorUniqueIdBinderComponent(ItemActor const&);
    void getIdentifier(void)const;
};
