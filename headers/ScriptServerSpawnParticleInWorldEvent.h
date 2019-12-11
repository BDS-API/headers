#pragma once

class ScriptServerSpawnParticleInWorldEvent : ScriptTemplateFactory<ScriptServerContext>::ReceivedEvent {

public:
    static long ScriptServerSpawnParticleInWorldEvent::mHash;

    virtual ~ScriptServerSpawnParticleInWorldEvent();
    virtual void receivedEvent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, ScriptApi::ScriptObjectHandle const&);
    virtual void getEventData(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, ScriptApi::ScriptObjectHandle &);

    void getHash(void);
    void ScriptServerSpawnParticleInWorldEvent(void);
};
