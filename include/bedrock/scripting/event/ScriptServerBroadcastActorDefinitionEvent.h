#pragma once

#include <string>


class ScriptServerBroadcastActorDefinitionEvent /*ScriptTemplateFactory<ScriptServerContext>::ReceivedEvent*/ { //TODO: incomplete class definition

public:
    static long mHash;

    virtual void receivedEvent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, std::string const&, ScriptApi::ScriptObjectHandle const&);
    ~ScriptServerBroadcastActorDefinitionEvent();
    virtual void getEventData(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, std::string const&, ScriptApi::ScriptObjectHandle &);
    std::string getName();
    ScriptServerBroadcastActorDefinitionEvent();
    void getHash();
};
