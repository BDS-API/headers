#pragma once

#include "../../../../unmapped/BlockPos"
#include "../../../../unmapped/ScriptEngine"
#include "../../../../unmapped/ActorUniqueID"


class ScriptServerActorDeathEvent : ScriptEventData {

public:
    static long mHash;

    virtual ScriptServerActorDeathEvent::~ScriptServerActorDeathEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash(void);
    ScriptServerActorDeathEvent(void);
    void setActorId(ActorUniqueID const&);
    void setKillerId(ActorUniqueID const&);
    void setBlockPos(BlockPos const&);
    void setCause(std::string const&);
    void setProjectile(ActorType const&);
};
