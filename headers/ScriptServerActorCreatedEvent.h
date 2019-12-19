#pragma once

class ScriptServerActorCreatedEvent : ScriptEventData {

public:
    static long mHash;

    virtual ~ScriptServerActorCreatedEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash(void);
    void ScriptServerActorCreatedEvent(void);
    void setActorId(ActorUniqueID const&);
};
