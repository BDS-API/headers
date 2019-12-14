#pragma once

class ScriptServerPlaySoundEvent : ScriptTemplateFactory<ScriptServerContext>::ReceivedEvent {

public:
    static long ScriptServerPlaySoundEvent::mHash;

    virtual ~ScriptServerPlaySoundEvent();
    virtual void receivedEvent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, std::string const&, ScriptApi::ScriptObjectHandle const&);
    virtual void getEventData(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, std::string const&, ScriptApi::ScriptObjectHandle &);

    void getHash(void);
    void ScriptServerPlaySoundEvent(void);
};
