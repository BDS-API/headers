#pragma once

#include <string>


class ScriptServerLoggerConfigReceivedEvent /*public ScriptTemplateFactory<ScriptServerContext>::ReceivedEvent*/ { //TODO: incomplete class definition

public:
    static long mHash;

    virtual ~ScriptServerLoggerConfigReceivedEvent(); // _ZN37ScriptServerLoggerConfigReceivedEventD2Ev
    virtual void __fake_function0(); // fake
    virtual void receivedEvent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, std::string const&, ScriptApi::ScriptObjectHandle const&); // _ZN37ScriptServerLoggerConfigReceivedEvent13receivedEventERKN9ScriptApi17ScriptVersionInfoER12ScriptEngineR19ScriptServerContextRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS0_18ScriptObjectHandleE
    virtual void getEventData(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, std::string const&, ScriptApi::ScriptObjectHandle &); // _ZN37ScriptServerLoggerConfigReceivedEvent12getEventDataERKN9ScriptApi17ScriptVersionInfoER12ScriptEngineR19ScriptServerContextRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERNS0_18ScriptObjectHandleE
    void getHash(); // _ZN37ScriptServerLoggerConfigReceivedEvent7getHashEv
    ScriptServerLoggerConfigReceivedEvent(); // _ZN37ScriptServerLoggerConfigReceivedEventC2Ev
};
