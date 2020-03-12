#pragma once

#include "../../unmapped/ScriptEngine.h"
#include "../../../util/BlockPos.h"
#include "../../ScriptObjectHandle.h"
#include "ScriptEventData.h"
#include "../../../actor/unmapped/ActorUniqueID.h"


class ScriptServerBlockDestructionStartedEvent : ScriptEventData {

public:
    static long mHash;

    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
    ~ScriptServerBlockDestructionStartedEvent();
    ScriptServerBlockDestructionStartedEvent();
    void setActorId(ActorUniqueID const&);
    std::string getName();
    void getHash();
    void setBlockPos(BlockPos const&);
};
