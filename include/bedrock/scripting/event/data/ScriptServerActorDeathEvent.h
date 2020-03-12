#pragma once

#include <string>
#include "../../unmapped/ScriptEngine.h"
#include "../../../util/BlockPos.h"
#include "../../ScriptObjectHandle.h"
#include "ScriptEventData.h"
#include "../../../actor/unmapped/ActorUniqueID.h"


class ScriptServerActorDeathEvent : ScriptEventData {

public:
    static long mHash;

    ~ScriptServerActorDeathEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
    void setActorId(ActorUniqueID const&);
    void setCause(std::string const&);
    void setBlockPos(BlockPos const&);
    std::string getName();
    void getHash();
    void setKillerId(ActorUniqueID const&);
//  void setProjectile(ActorType const&); //TODO: incomplete function definition
    ScriptServerActorDeathEvent();
};
