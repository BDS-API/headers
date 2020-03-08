#pragma once

#include "../../../actor/unmapped/ActorUniqueID"
#include "../../unmapped/ScriptEngine"
#include "../../ScriptObjectHandle"


class ScriptServerActorStartRidingEvent : ScriptEventData {

public:
    static long mHash;

    virtual ScriptServerActorStartRidingEvent::~ScriptServerActorStartRidingEvent()
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerActorStartRidingEvent(void);
    void setActorId(ActorUniqueID const&);
    void setRideEntityId(ActorUniqueID const&);
};
