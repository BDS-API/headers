#pragma once

class ScriptServerPlayerAttackedActorEvent : ScriptEventData {

public:
    static long mHash;

    virtual ~ScriptServerPlayerAttackedActorEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash(void);
    void ScriptServerPlayerAttackedActorEvent(void);
    void setPlayerId(ActorUniqueID const&);
    void setAttackedActorId(ActorUniqueID const&);
};
