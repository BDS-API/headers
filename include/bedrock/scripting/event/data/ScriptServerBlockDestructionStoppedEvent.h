#pragma once

#include <string>
#include "ScriptEventData.h"


class ScriptServerBlockDestructionStoppedEvent : public ScriptEventData {

public:
    static long mHash;

    virtual ~ScriptServerBlockDestructionStoppedEvent(); // _ZN40ScriptServerBlockDestructionStoppedEventD2Ev
    virtual void __fake_function0(); // fake
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const; // _ZNK40ScriptServerBlockDestructionStoppedEvent10_serializeER12ScriptEngineRN9ScriptApi18ScriptObjectHandleE
    void getHash(); // _ZN40ScriptServerBlockDestructionStoppedEvent7getHashEv
    ScriptServerBlockDestructionStoppedEvent(); // _ZN40ScriptServerBlockDestructionStoppedEventC2Ev
    void setActorId(ActorUniqueID const&); // _ZN40ScriptServerBlockDestructionStoppedEvent10setActorIdERK13ActorUniqueID
    void setBlockPos(BlockPos const&); // _ZN40ScriptServerBlockDestructionStoppedEvent11setBlockPosERK8BlockPos
    void setProgress(float); // _ZN40ScriptServerBlockDestructionStoppedEvent11setProgressEf
    std::string getName(); // _ZN40ScriptServerBlockDestructionStoppedEvent7getNameB5cxx11Ev
};
