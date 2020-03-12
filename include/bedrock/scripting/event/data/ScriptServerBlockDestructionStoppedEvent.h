#pragma once

#include "../../unmapped/ScriptEngine.h"
#include "../../../util/BlockPos.h"
#include "../../ScriptObjectHandle.h"
#include "ScriptEventData.h"
#include "../../../actor/unmapped/ActorUniqueID.h"


class ScriptServerBlockDestructionStoppedEvent : ScriptEventData {

public:
    static long mHash;

    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
    ~ScriptServerBlockDestructionStoppedEvent();
    void setActorId(ActorUniqueID const&);
    void setProgress(float);
    void getHash();
    std::string getName();
    void setBlockPos(BlockPos const&);
    ScriptServerBlockDestructionStoppedEvent();
};
