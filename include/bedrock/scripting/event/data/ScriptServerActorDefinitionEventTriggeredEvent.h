#pragma once

#include <string>
#include "ScriptEventData.h"


class ScriptServerActorDefinitionEventTriggeredEvent : ScriptEventData {

public:
    static long mHash;

    ~ScriptServerActorDefinitionEventTriggeredEvent(); // _ZN46ScriptServerActorDefinitionEventTriggeredEventD2Ev
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const; // _ZNK46ScriptServerActorDefinitionEventTriggeredEvent10_serializeER12ScriptEngineRN9ScriptApi18ScriptObjectHandleE
    void getHash(); // _ZN46ScriptServerActorDefinitionEventTriggeredEvent7getHashEv
    ScriptServerActorDefinitionEventTriggeredEvent(); // _ZN46ScriptServerActorDefinitionEventTriggeredEventC2Ev
    void setActorId(ActorUniqueID const&); // _ZN46ScriptServerActorDefinitionEventTriggeredEvent10setActorIdERK13ActorUniqueID
    void setEventId(std::string const&); // _ZN46ScriptServerActorDefinitionEventTriggeredEvent10setEventIdERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    std::string getName(); // _ZN46ScriptServerActorDefinitionEventTriggeredEvent7getNameB5cxx11Ev
};
