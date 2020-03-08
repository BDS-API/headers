#pragma once

#include "../../../actor/unmapped/ActorUniqueID"
#include "../../ScriptObjectHandle"
#include "../../unmapped/ScriptEngine"


class ScriptServerActorStartRidingEvent : ScriptEventData {

public:
    static long mHash;

    ScriptServerActorStartRidingEvent::~ScriptServerActorStartRidingEvent()
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerActorStartRidingEvent(void);
    void setActorId(ActorUniqueID const&);
    void setRideEntityId(ActorUniqueID const&);
};
