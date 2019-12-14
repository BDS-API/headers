#pragma once

class ScriptServerActorDefinitionEventTriggeredEvent : ScriptEventData {

public:
    static long ScriptServerActorDefinitionEventTriggeredEvent::mHash;

    virtual ~ScriptServerActorDefinitionEventTriggeredEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash(void);
    void ScriptServerActorDefinitionEventTriggeredEvent(void);
    void setActorId(ActorUniqueID const&);
    void setEventId(std::string const&);
};
