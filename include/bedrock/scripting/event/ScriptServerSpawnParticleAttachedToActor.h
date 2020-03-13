#pragma once

#include <string>


class ScriptServerSpawnParticleAttachedToActor /*ScriptTemplateFactory<ScriptServerContext>::ReceivedEvent*/ { //TODO: incomplete class definition

public:
    static long mHash;

    ~ScriptServerSpawnParticleAttachedToActor(); // _ZN40ScriptServerSpawnParticleAttachedToActorD2Ev
    virtual void receivedEvent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, std::string const&, ScriptApi::ScriptObjectHandle const&); // _ZN40ScriptServerSpawnParticleAttachedToActor13receivedEventERKN9ScriptApi17ScriptVersionInfoER12ScriptEngineR19ScriptServerContextRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS0_18ScriptObjectHandleE
    virtual void getEventData(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, std::string const&, ScriptApi::ScriptObjectHandle &); // _ZN40ScriptServerSpawnParticleAttachedToActor12getEventDataERKN9ScriptApi17ScriptVersionInfoER12ScriptEngineR19ScriptServerContextRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERNS0_18ScriptObjectHandleE
    void getHash(); // _ZN40ScriptServerSpawnParticleAttachedToActor7getHashEv
    ScriptServerSpawnParticleAttachedToActor(); // _ZN40ScriptServerSpawnParticleAttachedToActorC2Ev
};
