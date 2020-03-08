#pragma once

#include "../../unmapped/ScriptEngine"
#include "../../../actor/unmapped/ActorUniqueID"
#include "../../ScriptObjectHandle"


class ScriptServerActorStopRidingEvent : ScriptEventData {

public:
    static long mHash;

    ScriptServerActorStopRidingEvent::~ScriptServerActorStopRidingEvent()
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerActorStopRidingEvent(void);
    void setActorId(ActorUniqueID const&);
    void setExitFromRider(bool);
    void setEntityIsBeingDestroyed(bool);
    void setSwitchingRides(bool);
};
