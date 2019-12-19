#pragma once

class ScriptServerActorDefinitionEventTriggeredEvent : ScriptEventData {

public:
    static long mHash;

    virtual ScriptServerActorDefinitionEventTriggeredEvent::~ScriptServerActorDefinitionEventTriggeredEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash(void);
    ScriptServerActorDefinitionEventTriggeredEvent(void);
    void setActorId(ActorUniqueID const&);
    void setEventId(std::string const&);
};
