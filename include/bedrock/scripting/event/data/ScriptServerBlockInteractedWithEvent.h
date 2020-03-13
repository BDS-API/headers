#pragma once

#include <string>
#include "ScriptEventData.h"


class ScriptServerBlockInteractedWithEvent : ScriptEventData {

public:
    static long mHash;

    ~ScriptServerBlockInteractedWithEvent(); // _ZN36ScriptServerBlockInteractedWithEventD2Ev
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const; // _ZNK36ScriptServerBlockInteractedWithEvent10_serializeER12ScriptEngineRN9ScriptApi18ScriptObjectHandleE
    void getHash(); // _ZN36ScriptServerBlockInteractedWithEvent7getHashEv
    ScriptServerBlockInteractedWithEvent(); // _ZN36ScriptServerBlockInteractedWithEventC2Ev
    void setActorId(ActorUniqueID const&); // _ZN36ScriptServerBlockInteractedWithEvent10setActorIdERK13ActorUniqueID
    void setBlockPos(BlockPos const&); // _ZN36ScriptServerBlockInteractedWithEvent11setBlockPosERK8BlockPos
    std::string getName(); // _ZN36ScriptServerBlockInteractedWithEvent7getNameB5cxx11Ev
};
