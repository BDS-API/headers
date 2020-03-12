#pragma once

#include <string>
#include "ScriptEventData.h"


class ScriptServerBlockDestructionStoppedEvent : ScriptEventData {

public:
    static long mHash;

    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
    ~ScriptServerBlockDestructionStoppedEvent();
    void getHash();
    std::string getName();
    ScriptServerBlockDestructionStoppedEvent();
    void setProgress(float);
    void setActorId(ActorUniqueID const&);
    void setBlockPos(BlockPos const&);
};
