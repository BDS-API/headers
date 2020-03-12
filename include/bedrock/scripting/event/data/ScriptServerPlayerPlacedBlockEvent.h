#pragma once

#include <string>
#include "ScriptEventData.h"


class ScriptServerPlayerPlacedBlockEvent : ScriptEventData {

public:
    static long mHash;

    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
    ~ScriptServerPlayerPlacedBlockEvent();
    std::string getName();
    ScriptServerPlayerPlacedBlockEvent();
    void setActorId(ActorUniqueID const&);
    void setBlockPos(BlockPos const&);
    void getHash();
};
