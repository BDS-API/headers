#pragma once

#include "../ScriptObjectHandle.h"
#include <string>
#include "../unmapped/ScriptEngine.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include "../../level/tickingarea/ITickingArea.h"
#include "ScriptBinderComponent.h"


class ScriptActorAreaBinderComponent : ScriptBinderComponent {

public:
    static std::string TAG;

    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);
    ~ScriptActorAreaBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    ScriptActorAreaBinderComponent(ActorUniqueID);
    ScriptActorAreaBinderComponent();
    ScriptActorAreaBinderComponent(ITickingArea const&);
    void getIdentifier()const;
};
