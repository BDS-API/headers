#pragma once

class ScriptServerActorStopRidingEvent : ScriptEventData {

public:
    static long mHash;

    virtual ScriptServerActorStopRidingEvent::~ScriptServerActorStopRidingEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash(void);
    ScriptServerActorStopRidingEvent(void);
    void setActorId(ActorUniqueID const&);
    void setExitFromRider(bool);
    void setEntityIsBeingDestroyed(bool);
    void setSwitchingRides(bool);
};
