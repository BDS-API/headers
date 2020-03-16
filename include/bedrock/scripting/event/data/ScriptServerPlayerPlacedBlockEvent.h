#pragma once

#include <string>
#include "ScriptEventData.h"


class ScriptServerPlayerPlacedBlockEvent : public ScriptEventData {

public:
    static long mHash;

    virtual ~ScriptServerPlayerPlacedBlockEvent(); // _ZN34ScriptServerPlayerPlacedBlockEventD2Ev
    virtual void __fake_function0(); // fake
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const; // _ZNK34ScriptServerPlayerPlacedBlockEvent10_serializeER12ScriptEngineRN9ScriptApi18ScriptObjectHandleE
    void getHash(); // _ZN34ScriptServerPlayerPlacedBlockEvent7getHashEv
    ScriptServerPlayerPlacedBlockEvent(); // _ZN34ScriptServerPlayerPlacedBlockEventC2Ev
    void setActorId(ActorUniqueID const&); // _ZN34ScriptServerPlayerPlacedBlockEvent10setActorIdERK13ActorUniqueID
    void setBlockPos(BlockPos const&); // _ZN34ScriptServerPlayerPlacedBlockEvent11setBlockPosERK8BlockPos
    std::string getName(); // _ZN34ScriptServerPlayerPlacedBlockEvent7getNameB5cxx11Ev
};
