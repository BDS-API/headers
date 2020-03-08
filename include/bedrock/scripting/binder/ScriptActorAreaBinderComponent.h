#pragma once

#include "../unmapped/ScriptEngine"
#include "../../actor/unmapped/ActorUniqueID"
#include "../ScriptObjectHandle"
#include "../../level/tickingarea/ITickingArea"


class ScriptActorAreaBinderComponent : ScriptBinderComponent {

public:
    static long TAG[abi:cxx11];

    ScriptActorAreaBinderComponent::~ScriptActorAreaBinderComponent()
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);

    ScriptActorAreaBinderComponent(void);
    ScriptActorAreaBinderComponent(ActorUniqueID);
    ScriptActorAreaBinderComponent(ITickingArea const&);
    void getIdentifier()const;
};
