#pragma once

#include "../../actor/unmapped/ActorUniqueID.h"
#include "ScriptBinderComponent.h"


class ScriptActorAreaBinderComponent : ScriptBinderComponent {

public:
    static std::string TAG;

    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    ~ScriptActorAreaBinderComponent();
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);
    ScriptActorAreaBinderComponent();
    void getIdentifier()const;
    ScriptActorAreaBinderComponent(ITickingArea const&);
    ScriptActorAreaBinderComponent(ActorUniqueID);
};
