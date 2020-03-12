#pragma once

#include <string>
#include "ScriptEventData.h"


class ScriptServerBlockDestructionStartedEvent : ScriptEventData {

public:
    static long mHash;

    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
    ~ScriptServerBlockDestructionStartedEvent();
    std::string getName();
    ScriptServerBlockDestructionStartedEvent();
    void getHash();
    void setBlockPos(BlockPos const&);
    void setActorId(ActorUniqueID const&);
};
