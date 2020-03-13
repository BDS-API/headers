#pragma once

#include <string>
#include "ScriptEventData.h"


class ScriptServerActorAttackEvent : ScriptEventData {

public:
    static long mHash;

    ~ScriptServerActorAttackEvent(); // _ZN28ScriptServerActorAttackEventD2Ev
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const; // _ZNK28ScriptServerActorAttackEvent10_serializeER12ScriptEngineRN9ScriptApi18ScriptObjectHandleE
    void getHash(); // _ZN28ScriptServerActorAttackEvent7getHashEv
    ScriptServerActorAttackEvent(); // _ZN28ScriptServerActorAttackEventC2Ev
    void setActorId(ActorUniqueID const&); // _ZN28ScriptServerActorAttackEvent10setActorIdERK13ActorUniqueID
    void setTargetId(ActorUniqueID const&); // _ZN28ScriptServerActorAttackEvent11setTargetIdERK13ActorUniqueID
    std::string getName(); // _ZN28ScriptServerActorAttackEvent7getNameB5cxx11Ev
};
