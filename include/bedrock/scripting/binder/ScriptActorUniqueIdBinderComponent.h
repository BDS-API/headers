#pragma once

#include "../../actor/unmapped/ActorUniqueID.h"
#include "ScriptBinderComponent.h"


class ScriptActorUniqueIdBinderComponent : ScriptBinderComponent {

public:
    static std::string TAG;

    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);
    ~ScriptActorUniqueIdBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    ScriptActorUniqueIdBinderComponent(Actor const&);
    ScriptActorUniqueIdBinderComponent();
    ScriptActorUniqueIdBinderComponent(ItemActor const&);
    void getIdentifier()const;
    ScriptActorUniqueIdBinderComponent(ActorUniqueID);
};
