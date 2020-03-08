#pragma once

#include "../../../util/BlockPos"
#include "../../ScriptObjectHandle"
#include "../../../actor/unmapped/ActorUniqueID"
#include "../../unmapped/ScriptEngine"


class ScriptServerActorHurtEvent : ScriptEventData {

public:
    static long mHash;

    virtual ScriptServerActorHurtEvent::~ScriptServerActorHurtEvent()
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerActorHurtEvent(void);
    void setActorId(ActorUniqueID const&);
    void setAttackerId(ActorUniqueID const&);
    void setBlockPos(BlockPos const&);
    void setCause(std::string const&);
    void setProjectile(ActorType const&);
    void setDamage(int);
    void setAbsorbedDamage(int);
};
