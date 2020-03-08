#pragma once

#include "../../level/tickingarea/ITickingArea"
#include "../ScriptObjectHandle"
#include "../../actor/unmapped/ActorUniqueID"
#include "../unmapped/ScriptEngine"


class ScriptActorAreaBinderComponent : ScriptBinderComponent {

public:
    static long TAG[abi:cxx11];

    virtual ScriptActorAreaBinderComponent::~ScriptActorAreaBinderComponent()
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);

    ScriptActorAreaBinderComponent(void);
    ScriptActorAreaBinderComponent(ActorUniqueID);
    ScriptActorAreaBinderComponent(ITickingArea const&);
    void getIdentifier()const;
};
