#pragma once

#include "./ScriptBinderComponent.h"
#include "../unmapped/ScriptEngine.h"
#include "../ScriptObjectHandle.h"
#include "../../level/tickingarea/ITickingArea.h"
#include "../../actor/unmapped/ActorUniqueID.h"


class ScriptActorAreaBinderComponent : ScriptBinderComponent {

public:
    static std::string TAG;

    virtual ~ScriptActorAreaBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);

    ScriptActorAreaBinderComponent();
    ScriptActorAreaBinderComponent(ActorUniqueID);
    ScriptActorAreaBinderComponent(ITickingArea const&);
    void getIdentifier()const;
};
