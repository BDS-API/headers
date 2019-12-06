#pragma once

class ScriptServerActorDefinitionEventTriggeredEvent : ScriptEventData {

public:
    static long ScriptServerActorDefinitionEventTriggeredEvent::mHash;

    virtual ~ScriptServerActorDefinitionEventTriggeredEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash(void);
    void ScriptServerActorDefinitionEventTriggeredEvent(void);
    void setActorId(ActorUniqueID const&);
    void setEventId(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
};
