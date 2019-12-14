#pragma once

class ScriptServerBroadcastReceived : ScriptTemplateFactory<ScriptServerContext>::ReceivedEvent {

public:
    virtual ~ScriptServerBroadcastReceived();
    virtual void receivedEvent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, std::string const&, ScriptApi::ScriptObjectHandle const&);
    virtual void getEventData(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, std::string const&, ScriptApi::ScriptObjectHandle &);

    void ScriptServerBroadcastReceived(void);
};
