#pragma once

#include <string>
#include "ScriptEventData.h"


class ScriptServerActorDeathEvent : ScriptEventData {

public:
    static long mHash;

    ~ScriptServerActorDeathEvent(); // _ZN27ScriptServerActorDeathEventD2Ev
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const; // _ZNK27ScriptServerActorDeathEvent10_serializeER12ScriptEngineRN9ScriptApi18ScriptObjectHandleE
    void getHash(); // _ZN27ScriptServerActorDeathEvent7getHashEv
    ScriptServerActorDeathEvent(); // _ZN27ScriptServerActorDeathEventC2Ev
    void setActorId(ActorUniqueID const&); // _ZN27ScriptServerActorDeathEvent10setActorIdERK13ActorUniqueID
    void setKillerId(ActorUniqueID const&); // _ZN27ScriptServerActorDeathEvent11setKillerIdERK13ActorUniqueID
    void setBlockPos(BlockPos const&); // _ZN27ScriptServerActorDeathEvent11setBlockPosERK8BlockPos
    void setCause(std::string const&); // _ZN27ScriptServerActorDeathEvent8setCauseERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  void setProjectile(ActorType const&); //TODO: incomplete function definition // _ZN27ScriptServerActorDeathEvent13setProjectileERK9ActorType
    std::string getName(); // _ZN27ScriptServerActorDeathEvent7getNameB5cxx11Ev
};
