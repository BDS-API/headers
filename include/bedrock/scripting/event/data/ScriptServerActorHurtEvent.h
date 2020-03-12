#pragma once

#include <string>
#include "ScriptEventData.h"


class ScriptServerActorHurtEvent : ScriptEventData {

public:
    static long mHash;

    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
    ~ScriptServerActorHurtEvent();
    void setDamage(int);
    void getHash();
    ScriptServerActorHurtEvent();
//  void setProjectile(ActorType const&); //TODO: incomplete function definition
    void setCause(std::string const&);
    void setBlockPos(BlockPos const&);
    void setActorId(ActorUniqueID const&);
    void setAbsorbedDamage(int);
    std::string getName();
    void setAttackerId(ActorUniqueID const&);
};
