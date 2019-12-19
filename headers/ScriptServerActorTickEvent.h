#pragma once

class ScriptServerActorTickEvent : ScriptEventData {

public:
    static long mHash;

    virtual ~ScriptServerActorTickEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash(void);
    void ScriptServerActorTickEvent(void);
    void setActorId(ActorUniqueID const&);
};
