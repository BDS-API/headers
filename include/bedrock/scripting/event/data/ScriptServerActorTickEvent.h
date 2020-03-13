#pragma once

#include <string>
#include "ScriptEventData.h"


class ScriptServerActorTickEvent : ScriptEventData {

public:
    static long mHash;

    ~ScriptServerActorTickEvent(); // _ZN26ScriptServerActorTickEventD2Ev
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const; // _ZNK26ScriptServerActorTickEvent10_serializeER12ScriptEngineRN9ScriptApi18ScriptObjectHandleE
    void getHash(); // _ZN26ScriptServerActorTickEvent7getHashEv
    ScriptServerActorTickEvent(); // _ZN26ScriptServerActorTickEventC2Ev
    void setActorId(ActorUniqueID const&); // _ZN26ScriptServerActorTickEvent10setActorIdERK13ActorUniqueID
    std::string getName(); // _ZN26ScriptServerActorTickEvent7getNameB5cxx11Ev
};
