#pragma once

#include <string>
#include "ScriptEventData.h"


class ScriptServerActorMoveEvent : ScriptEventData {

public:
    static long mHash;

    ~ScriptServerActorMoveEvent(); // _ZN26ScriptServerActorMoveEventD2Ev
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const; // _ZNK26ScriptServerActorMoveEvent10_serializeER12ScriptEngineRN9ScriptApi18ScriptObjectHandleE
    void getHash(); // _ZN26ScriptServerActorMoveEvent7getHashEv
    ScriptServerActorMoveEvent(); // _ZN26ScriptServerActorMoveEventC2Ev
    void setActorId(ActorUniqueID const&); // _ZN26ScriptServerActorMoveEvent10setActorIdERK13ActorUniqueID
    std::string getName(); // _ZN26ScriptServerActorMoveEvent7getNameB5cxx11Ev
};
