#pragma once

#include <string>
#include "ScriptEventData.h"


class ScriptServerBlockExplodedEvent : ScriptEventData {

public:
    static long mHash;

    ~ScriptServerBlockExplodedEvent(); // _ZN30ScriptServerBlockExplodedEventD2Ev
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const; // _ZNK30ScriptServerBlockExplodedEvent10_serializeER12ScriptEngineRN9ScriptApi18ScriptObjectHandleE
    void getHash(); // _ZN30ScriptServerBlockExplodedEvent7getHashEv
    ScriptServerBlockExplodedEvent(); // _ZN30ScriptServerBlockExplodedEventC2Ev
    void setActorId(ActorUniqueID const&); // _ZN30ScriptServerBlockExplodedEvent10setActorIdERK13ActorUniqueID
    void setBlockPos(BlockPos const&); // _ZN30ScriptServerBlockExplodedEvent11setBlockPosERK8BlockPos
    void setCause(std::string const&); // _ZN30ScriptServerBlockExplodedEvent8setCauseERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void setBlockIdentifier(std::string const&); // _ZN30ScriptServerBlockExplodedEvent18setBlockIdentifierERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    std::string getName(); // _ZN30ScriptServerBlockExplodedEvent7getNameB5cxx11Ev
};
