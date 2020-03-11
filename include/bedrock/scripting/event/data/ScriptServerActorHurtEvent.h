#pragma once

#include "../../../util/BlockPos.h"
#include "../../unmapped/ScriptEngine.h"
#include "./ScriptEventData.h"
#include "../../../actor/unmapped/ActorUniqueID.h"
#include "../../ScriptObjectHandle.h"
#include <string>


class ScriptServerActorHurtEvent : ScriptEventData {

public:
    static long mHash;

    virtual ~ScriptServerActorHurtEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerActorHurtEvent();
    void setActorId(ActorUniqueID const&);
    void setAttackerId(ActorUniqueID const&);
    void setBlockPos(BlockPos const&);
    void setCause(std::string const&);
//  void setProjectile(ActorType const&); //TODO: incomplete function definition
    void setDamage(int);
    void setAbsorbedDamage(int);
    std::string getName();
};
