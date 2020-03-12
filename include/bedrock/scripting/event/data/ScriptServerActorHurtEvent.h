#pragma once

#include <string>
#include "../../unmapped/ScriptEngine.h"
#include "../../../util/BlockPos.h"
#include "../../ScriptObjectHandle.h"
#include "ScriptEventData.h"
#include "../../../actor/unmapped/ActorUniqueID.h"


class ScriptServerActorHurtEvent : ScriptEventData {

public:
    static long mHash;

    ~ScriptServerActorHurtEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
    void getHash();
    void setDamage(int);
    void setAbsorbedDamage(int);
    void setAttackerId(ActorUniqueID const&);
    void setCause(std::string const&);
    ScriptServerActorHurtEvent();
//  void setProjectile(ActorType const&); //TODO: incomplete function definition
    void setBlockPos(BlockPos const&);
    void setActorId(ActorUniqueID const&);
    std::string getName();
};
