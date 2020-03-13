#pragma once

#include <string>


class ScriptServerBroadcastReceived /*ScriptTemplateFactory<ScriptServerContext>::ReceivedEvent*/ { //TODO: incomplete class definition

public:
    ~ScriptServerBroadcastReceived(); // _ZN29ScriptServerBroadcastReceivedD2Ev
    virtual void receivedEvent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, std::string const&, ScriptApi::ScriptObjectHandle const&); // _ZN29ScriptServerBroadcastReceived13receivedEventERKN9ScriptApi17ScriptVersionInfoER12ScriptEngineR19ScriptServerContextRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS0_18ScriptObjectHandleE
    virtual void getEventData(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, std::string const&, ScriptApi::ScriptObjectHandle &); // _ZN29ScriptServerBroadcastReceived12getEventDataERKN9ScriptApi17ScriptVersionInfoER12ScriptEngineR19ScriptServerContextRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERNS0_18ScriptObjectHandleE
    ScriptServerBroadcastReceived(); // _ZN29ScriptServerBroadcastReceivedC2Ev
};
