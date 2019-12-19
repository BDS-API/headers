#pragma once

class ScriptServerActorAttackEvent : ScriptEventData {

public:
    static long mHash;

    virtual ScriptServerActorAttackEvent::~ScriptServerActorAttackEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash(void);
    ScriptServerActorAttackEvent(void);
    void setActorId(ActorUniqueID const&);
    void setTargetId(ActorUniqueID const&);
};
