#pragma once

#include <string>
#include "ScriptEventData.h"


class ScriptServerBlockDestructionStartedEvent : ScriptEventData {

public:
    static long mHash;

    ~ScriptServerBlockDestructionStartedEvent(); // _ZN40ScriptServerBlockDestructionStartedEventD2Ev
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const; // _ZNK40ScriptServerBlockDestructionStartedEvent10_serializeER12ScriptEngineRN9ScriptApi18ScriptObjectHandleE
    void getHash(); // _ZN40ScriptServerBlockDestructionStartedEvent7getHashEv
    ScriptServerBlockDestructionStartedEvent(); // _ZN40ScriptServerBlockDestructionStartedEventC2Ev
    void setActorId(ActorUniqueID const&); // _ZN40ScriptServerBlockDestructionStartedEvent10setActorIdERK13ActorUniqueID
    void setBlockPos(BlockPos const&); // _ZN40ScriptServerBlockDestructionStartedEvent11setBlockPosERK8BlockPos
    std::string getName(); // _ZN40ScriptServerBlockDestructionStartedEvent7getNameB5cxx11Ev
};
