#pragma once

class ScriptServerActorCreatedEvent : ScriptEventData {

public:
    static long mHash;

    virtual ScriptServerActorCreatedEvent::~ScriptServerActorCreatedEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash(void);
    ScriptServerActorCreatedEvent(void);
    void setActorId(ActorUniqueID const&);
};
