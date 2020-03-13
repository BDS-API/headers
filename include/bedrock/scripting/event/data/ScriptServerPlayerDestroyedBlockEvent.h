#pragma once

#include <string>
#include "ScriptEventData.h"


class ScriptServerPlayerDestroyedBlockEvent : ScriptEventData {

public:
    static long mHash;

    ~ScriptServerPlayerDestroyedBlockEvent(); // _ZN37ScriptServerPlayerDestroyedBlockEventD2Ev
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const; // _ZNK37ScriptServerPlayerDestroyedBlockEvent10_serializeER12ScriptEngineRN9ScriptApi18ScriptObjectHandleE
    void getHash(); // _ZN37ScriptServerPlayerDestroyedBlockEvent7getHashEv
    ScriptServerPlayerDestroyedBlockEvent(); // _ZN37ScriptServerPlayerDestroyedBlockEventC2Ev
    void setActorId(ActorUniqueID const&); // _ZN37ScriptServerPlayerDestroyedBlockEvent10setActorIdERK13ActorUniqueID
    void setBlockPos(BlockPos const&); // _ZN37ScriptServerPlayerDestroyedBlockEvent11setBlockPosERK8BlockPos
    void setBlockIdentifier(std::string); // _ZN37ScriptServerPlayerDestroyedBlockEvent18setBlockIdentifierENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    std::string getName(); // _ZN37ScriptServerPlayerDestroyedBlockEvent7getNameB5cxx11Ev
};
