#pragma once

#include <string>
#include "ScriptEventData.h"


class ScriptServerBlockInteractedWithEvent : ScriptEventData {

public:
    static long mHash;

    ~ScriptServerBlockInteractedWithEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
    void setBlockPos(BlockPos const&);
    void setActorId(ActorUniqueID const&);
    std::string getName();
    ScriptServerBlockInteractedWithEvent();
    void getHash();
};
