#pragma once

class ScriptServerActorStartRidingEvent : ScriptEventData {

public:
    static long mHash;

    virtual ScriptServerActorStartRidingEvent::~ScriptServerActorStartRidingEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash(void);
    ScriptServerActorStartRidingEvent(void);
    void setActorId(ActorUniqueID const&);
    void setRideEntityId(ActorUniqueID const&);
};
