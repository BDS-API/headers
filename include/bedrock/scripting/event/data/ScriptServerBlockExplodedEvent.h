#pragma once

#include <string>
#include "ScriptEventData.h"


class ScriptServerBlockExplodedEvent : ScriptEventData {

public:
    static long mHash;

    ~ScriptServerBlockExplodedEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
    void setBlockIdentifier(std::string const&);
    ScriptServerBlockExplodedEvent();
    void setCause(std::string const&);
    void getHash();
    std::string getName();
    void setActorId(ActorUniqueID const&);
    void setBlockPos(BlockPos const&);
};
