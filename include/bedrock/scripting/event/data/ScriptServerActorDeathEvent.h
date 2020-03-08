#pragma once

#include "../../unmapped/ScriptEngine"
#include "../../../actor/unmapped/ActorUniqueID"
#include "../../ScriptObjectHandle"
#include "../../../util/BlockPos"


class ScriptServerActorDeathEvent : ScriptEventData {

public:
    static long mHash;

    ScriptServerActorDeathEvent::~ScriptServerActorDeathEvent()
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerActorDeathEvent(void);
    void setActorId(ActorUniqueID const&);
    void setKillerId(ActorUniqueID const&);
    void setBlockPos(BlockPos const&);
    void setCause(std::string const&);
    void setProjectile(ActorType const&);
};
