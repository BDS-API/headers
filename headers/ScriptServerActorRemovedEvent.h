#pragma once

class ScriptServerActorRemovedEvent : ScriptEventData {

public:
    static long ScriptServerActorRemovedEvent::mHash;

    virtual ~ScriptServerActorRemovedEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash(void);
    void ScriptServerActorRemovedEvent(void);
    void setActorId(ActorUniqueID const&);
};
