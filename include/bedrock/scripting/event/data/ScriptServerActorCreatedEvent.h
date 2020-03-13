#pragma once

#include <string>
#include "ScriptEventData.h"


class ScriptServerActorCreatedEvent : ScriptEventData {

public:
    static long mHash;

    ~ScriptServerActorCreatedEvent(); // _ZN29ScriptServerActorCreatedEventD2Ev
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const; // _ZNK29ScriptServerActorCreatedEvent10_serializeER12ScriptEngineRN9ScriptApi18ScriptObjectHandleE
    void getHash(); // _ZN29ScriptServerActorCreatedEvent7getHashEv
    ScriptServerActorCreatedEvent(); // _ZN29ScriptServerActorCreatedEventC2Ev
    void setActorId(ActorUniqueID const&); // _ZN29ScriptServerActorCreatedEvent10setActorIdERK13ActorUniqueID
    std::string getName(); // _ZN29ScriptServerActorCreatedEvent7getNameB5cxx11Ev
};
