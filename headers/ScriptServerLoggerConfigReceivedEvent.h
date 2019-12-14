#pragma once

class ScriptServerLoggerConfigReceivedEvent : ScriptTemplateFactory<ScriptServerContext>::ReceivedEvent {

public:
    static long ScriptServerLoggerConfigReceivedEvent::mHash;

    virtual ~ScriptServerLoggerConfigReceivedEvent();
    virtual void receivedEvent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, std::string const&, ScriptApi::ScriptObjectHandle const&);
    virtual void getEventData(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, std::string const&, ScriptApi::ScriptObjectHandle &);

    void getHash(void);
    void ScriptServerLoggerConfigReceivedEvent(void);
};
