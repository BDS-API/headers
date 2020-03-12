#pragma once

#include <string>
#include "ScriptEventData.h"


class ScriptServerActorDeathEvent : ScriptEventData {

public:
    static long mHash;

    ~ScriptServerActorDeathEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
    void setActorId(ActorUniqueID const&);
    void getHash();
    ScriptServerActorDeathEvent();
//  void setProjectile(ActorType const&); //TODO: incomplete function definition
    void setCause(std::string const&);
    void setKillerId(ActorUniqueID const&);
    std::string getName();
    void setBlockPos(BlockPos const&);
};
