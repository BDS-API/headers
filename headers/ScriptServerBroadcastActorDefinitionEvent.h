#pragma once

class ScriptServerBroadcastActorDefinitionEvent : ScriptTemplateFactory<ScriptServerContext>::ReceivedEvent {

public:
    static long ScriptServerBroadcastActorDefinitionEvent::mHash;

    virtual ~ScriptServerBroadcastActorDefinitionEvent();
    virtual void receivedEvent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, ScriptApi::ScriptObjectHandle const&);
    virtual void getEventData(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, ScriptApi::ScriptObjectHandle &);

    void getHash(void);
    void ScriptServerBroadcastActorDefinitionEvent(void);
};
