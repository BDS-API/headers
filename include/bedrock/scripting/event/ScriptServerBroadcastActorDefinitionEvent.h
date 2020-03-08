#pragma once

#include "../ScriptVersionInfo"
#include "../unmapped/ScriptEngine"
#include "../ScriptObjectHandle"
#include "../unmapped/ScriptServerContext"


class ScriptServerBroadcastActorDefinitionEvent : ScriptTemplateFactory<ScriptServerContext>::ReceivedEvent {

public:
    static long mHash;

    ScriptServerBroadcastActorDefinitionEvent::~ScriptServerBroadcastActorDefinitionEvent()
    virtual void receivedEvent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, std::string const&, ScriptApi::ScriptObjectHandle const&);
    virtual void getEventData(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, std::string const&, ScriptApi::ScriptObjectHandle &);

    void getHash();
    ScriptServerBroadcastActorDefinitionEvent(void);
};
