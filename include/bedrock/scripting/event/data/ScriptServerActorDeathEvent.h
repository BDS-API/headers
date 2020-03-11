#pragma once

#include "../../../util/BlockPos.h"
#include "../../unmapped/ScriptEngine.h"
#include "./ScriptEventData.h"
#include "../../../actor/unmapped/ActorUniqueID.h"
#include "../../ScriptObjectHandle.h"
#include <string>


class ScriptServerActorDeathEvent : ScriptEventData {

public:
    static long mHash;

    virtual ~ScriptServerActorDeathEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerActorDeathEvent();
    void setActorId(ActorUniqueID const&);
    void setKillerId(ActorUniqueID const&);
    void setBlockPos(BlockPos const&);
    void setCause(std::string const&);
//  void setProjectile(ActorType const&); //TODO: incomplete function definition
    std::string getName();
};
