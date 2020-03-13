#pragma once

#include <string>


class ScriptServerChatReceived /*ScriptTemplateFactory<ScriptServerContext>::ReceivedEvent*/ { //TODO: incomplete class definition

public:
    static long mHash;

    ~ScriptServerChatReceived(); // _ZN24ScriptServerChatReceivedD2Ev
    virtual void receivedEvent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, std::string const&, ScriptApi::ScriptObjectHandle const&); // _ZN24ScriptServerChatReceived13receivedEventERKN9ScriptApi17ScriptVersionInfoER12ScriptEngineR19ScriptServerContextRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS0_18ScriptObjectHandleE
    virtual void getEventData(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, std::string const&, ScriptApi::ScriptObjectHandle &); // _ZN24ScriptServerChatReceived12getEventDataERKN9ScriptApi17ScriptVersionInfoER12ScriptEngineR19ScriptServerContextRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERNS0_18ScriptObjectHandleE
    void getHash(); // _ZN24ScriptServerChatReceived7getHashEv
    ScriptServerChatReceived(); // _ZN24ScriptServerChatReceivedC2Ev
};
