#pragma once

#include "../ScriptVersionInfo"
#include "../ScriptObjectHandle"
#include "../unmapped/ScriptServerContext"
#include "../unmapped/ScriptEngine"


class ScriptServerBroadcastReceived : ScriptTemplateFactory<ScriptServerContext>::ReceivedEvent {

public:
    virtual ScriptServerBroadcastReceived::~ScriptServerBroadcastReceived()
    virtual void receivedEvent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, std::string const&, ScriptApi::ScriptObjectHandle const&);
    virtual void getEventData(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, std::string const&, ScriptApi::ScriptObjectHandle &);

    ScriptServerBroadcastReceived(void);
};
