#pragma once

class ScriptServerSpawnParticleAttachedToActor : ScriptTemplateFactory<ScriptServerContext>::ReceivedEvent {

public:
    static long ScriptServerSpawnParticleAttachedToActor::mHash;

    virtual ~ScriptServerSpawnParticleAttachedToActor();
    virtual void receivedEvent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, std::string const&, ScriptApi::ScriptObjectHandle const&);
    virtual void getEventData(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, std::string const&, ScriptApi::ScriptObjectHandle &);

    void getHash(void);
    void ScriptServerSpawnParticleAttachedToActor(void);
};
