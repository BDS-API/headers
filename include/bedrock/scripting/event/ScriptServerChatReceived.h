#pragma once

#include "../ScriptVersionInfo"
#include "../unmapped/ScriptEngine"
#include "../ScriptObjectHandle"
#include "../unmapped/ScriptServerContext"


class ScriptServerChatReceived : ScriptTemplateFactory<ScriptServerContext>::ReceivedEvent {

public:
    static long mHash;

    ScriptServerChatReceived::~ScriptServerChatReceived()
    virtual void receivedEvent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, std::string const&, ScriptApi::ScriptObjectHandle const&);
    virtual void getEventData(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, std::string const&, ScriptApi::ScriptObjectHandle &);

    void getHash();
    ScriptServerChatReceived(void);
};
