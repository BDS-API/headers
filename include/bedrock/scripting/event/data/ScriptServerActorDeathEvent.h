#pragma once

#include "../../../util/BlockPos"
#include "../../ScriptObjectHandle"
#include "../../../actor/unmapped/ActorUniqueID"
#include "../../unmapped/ScriptEngine"


class ScriptServerActorDeathEvent : ScriptEventData {

public:
    static long mHash;

    virtual ScriptServerActorDeathEvent::~ScriptServerActorDeathEvent()
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerActorDeathEvent(void);
    void setActorId(ActorUniqueID const&);
    void setKillerId(ActorUniqueID const&);
    void setBlockPos(BlockPos const&);
    void setCause(std::string const&);
    void setProjectile(ActorType const&);
};
