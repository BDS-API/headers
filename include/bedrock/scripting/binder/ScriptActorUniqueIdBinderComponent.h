#pragma once

#include "../ScriptObjectHandle.h"
#include <string>
#include "../unmapped/ScriptEngine.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include "../../actor/Actor.h"
#include "../../actor/ItemActor.h"
#include "ScriptBinderComponent.h"


class ScriptActorUniqueIdBinderComponent : ScriptBinderComponent {

public:
    static std::string TAG;

    ~ScriptActorUniqueIdBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);
    ScriptActorUniqueIdBinderComponent(ActorUniqueID);
    void getIdentifier()const;
    ScriptActorUniqueIdBinderComponent(Actor const&);
    ScriptActorUniqueIdBinderComponent(ItemActor const&);
    ScriptActorUniqueIdBinderComponent();
};
