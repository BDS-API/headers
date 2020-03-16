#pragma once

#include <string>
#include "ScriptEventData.h"


class ScriptServerActorHurtEvent : public ScriptEventData {

public:
    static long mHash;

    virtual ~ScriptServerActorHurtEvent(); // _ZN26ScriptServerActorHurtEventD2Ev
    virtual void __fake_function0(); // fake
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const; // _ZNK26ScriptServerActorHurtEvent10_serializeER12ScriptEngineRN9ScriptApi18ScriptObjectHandleE
    void getHash(); // _ZN26ScriptServerActorHurtEvent7getHashEv
    ScriptServerActorHurtEvent(); // _ZN26ScriptServerActorHurtEventC2Ev
    void setActorId(ActorUniqueID const&); // _ZN26ScriptServerActorHurtEvent10setActorIdERK13ActorUniqueID
    void setAttackerId(ActorUniqueID const&); // _ZN26ScriptServerActorHurtEvent13setAttackerIdERK13ActorUniqueID
    void setBlockPos(BlockPos const&); // _ZN26ScriptServerActorHurtEvent11setBlockPosERK8BlockPos
    void setCause(std::string const&); // _ZN26ScriptServerActorHurtEvent8setCauseERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//    void setProjectile(long const&); //TODO: incomplete function definition // _ZN26ScriptServerActorHurtEvent13setProjectileERK9ActorType
    void setDamage(int); // _ZN26ScriptServerActorHurtEvent9setDamageEi
    void setAbsorbedDamage(int); // _ZN26ScriptServerActorHurtEvent17setAbsorbedDamageEi
    std::string getName(); // _ZN26ScriptServerActorHurtEvent7getNameB5cxx11Ev
};
