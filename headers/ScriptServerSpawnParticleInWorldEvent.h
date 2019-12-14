#pragma once

class ScriptServerSpawnParticleInWorldEvent : ScriptTemplateFactory<ScriptServerContext>::ReceivedEvent {

public:
    static long ScriptServerSpawnParticleInWorldEvent::mHash;

    virtual ~ScriptServerSpawnParticleInWorldEvent();
    virtual void receivedEvent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, std::string const&, ScriptApi::ScriptObjectHandle const&);
    virtual void getEventData(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, std::string const&, ScriptApi::ScriptObjectHandle &);

    void getHash(void);
    void ScriptServerSpawnParticleInWorldEvent(void);
};
