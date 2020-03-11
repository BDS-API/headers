#pragma once

#include "./ScriptBinderComponent.h"
#include "../../actor/ItemActor.h"
#include "../unmapped/ScriptEngine.h"
#include "../../actor/Actor.h"
#include "../ScriptObjectHandle.h"
#include "../../actor/unmapped/ActorUniqueID.h"


class ScriptActorUniqueIdBinderComponent : ScriptBinderComponent {

public:
    static std::string TAG;

    virtual ~ScriptActorUniqueIdBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);

    ScriptActorUniqueIdBinderComponent();
    ScriptActorUniqueIdBinderComponent(ActorUniqueID);
    ScriptActorUniqueIdBinderComponent(Actor const&);
    ScriptActorUniqueIdBinderComponent(ItemActor const&);
    void getIdentifier()const;
};
