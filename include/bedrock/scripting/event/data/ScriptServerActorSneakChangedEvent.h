#pragma once

#include <string>
#include "ScriptEventData.h"


class ScriptServerActorSneakChangedEvent : ScriptEventData {

public:
    static long mHash;

    ~ScriptServerActorSneakChangedEvent(); // _ZN34ScriptServerActorSneakChangedEventD2Ev
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const; // _ZNK34ScriptServerActorSneakChangedEvent10_serializeER12ScriptEngineRN9ScriptApi18ScriptObjectHandleE
    void getHash(); // _ZN34ScriptServerActorSneakChangedEvent7getHashEv
    ScriptServerActorSneakChangedEvent(); // _ZN34ScriptServerActorSneakChangedEventC2Ev
    void setActorId(ActorUniqueID const&); // _ZN34ScriptServerActorSneakChangedEvent10setActorIdERK13ActorUniqueID
    void setIsSneaking(bool); // _ZN34ScriptServerActorSneakChangedEvent13setIsSneakingEb
    std::string getName(); // _ZN34ScriptServerActorSneakChangedEvent7getNameB5cxx11Ev
};
