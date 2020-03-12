#pragma once

#include <string>
#include "ScriptEventData.h"


class ScriptServerPlayerDestroyedBlockEvent : ScriptEventData {

public:
    static long mHash;

    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
    ~ScriptServerPlayerDestroyedBlockEvent();
    void setBlockPos(BlockPos const&);
    void setActorId(ActorUniqueID const&);
    ScriptServerPlayerDestroyedBlockEvent();
    std::string getName();
    void setBlockIdentifier(std::string);
    void getHash();
};
