#pragma once

class ScriptServerActorStartRidingEvent : ScriptEventData {

public:
    static long ScriptServerActorStartRidingEvent::mHash;

    virtual ~ScriptServerActorStartRidingEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash(void);
    void ScriptServerActorStartRidingEvent(void);
    void setActorId(ActorUniqueID const&);
    void setRideEntityId(ActorUniqueID const&);
};
