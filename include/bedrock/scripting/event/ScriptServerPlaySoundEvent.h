#pragma once

#include <string>


class ScriptServerPlaySoundEvent /*public ScriptTemplateFactory<ScriptServerContext>::ReceivedEvent*/ { //TODO: incomplete class definition

public:
    static long mHash;

    virtual ~ScriptServerPlaySoundEvent(); // _ZN26ScriptServerPlaySoundEventD2Ev
    virtual void __fake_function0(); // fake
    virtual void receivedEvent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, std::string const&, ScriptApi::ScriptObjectHandle const&); // _ZN26ScriptServerPlaySoundEvent13receivedEventERKN9ScriptApi17ScriptVersionInfoER12ScriptEngineR19ScriptServerContextRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS0_18ScriptObjectHandleE
    virtual void getEventData(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, std::string const&, ScriptApi::ScriptObjectHandle &); // _ZN26ScriptServerPlaySoundEvent12getEventDataERKN9ScriptApi17ScriptVersionInfoER12ScriptEngineR19ScriptServerContextRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERNS0_18ScriptObjectHandleE
    void getHash(); // _ZN26ScriptServerPlaySoundEvent7getHashEv
    ScriptServerPlaySoundEvent(); // _ZN26ScriptServerPlaySoundEventC2Ev
};
