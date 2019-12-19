#pragma once

class ScriptServerActorSneakChangedEvent : ScriptEventData {

public:
    static long mHash;

    virtual ~ScriptServerActorSneakChangedEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash(void);
    void ScriptServerActorSneakChangedEvent(void);
    void setActorId(ActorUniqueID const&);
    void setIsSneaking(bool);
};
