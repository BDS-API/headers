#pragma once

#include <string>


class ScriptServerBroadcastActorDefinitionEvent /*ScriptTemplateFactory<ScriptServerContext>::ReceivedEvent*/ { //TODO: incomplete class definition

public:
    static long mHash;

    ~ScriptServerBroadcastActorDefinitionEvent(); // _ZN41ScriptServerBroadcastActorDefinitionEventD2Ev
    virtual void receivedEvent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, std::string const&, ScriptApi::ScriptObjectHandle const&); // _ZN41ScriptServerBroadcastActorDefinitionEvent13receivedEventERKN9ScriptApi17ScriptVersionInfoER12ScriptEngineR19ScriptServerContextRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS0_18ScriptObjectHandleE
    virtual void getEventData(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, std::string const&, ScriptApi::ScriptObjectHandle &); // _ZN41ScriptServerBroadcastActorDefinitionEvent12getEventDataERKN9ScriptApi17ScriptVersionInfoER12ScriptEngineR19ScriptServerContextRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERNS0_18ScriptObjectHandleE
    void getHash(); // _ZN41ScriptServerBroadcastActorDefinitionEvent7getHashEv
    ScriptServerBroadcastActorDefinitionEvent(); // _ZN41ScriptServerBroadcastActorDefinitionEventC2Ev
    std::string getName(); // _ZN41ScriptServerBroadcastActorDefinitionEvent7getNameB5cxx11Ev
};
