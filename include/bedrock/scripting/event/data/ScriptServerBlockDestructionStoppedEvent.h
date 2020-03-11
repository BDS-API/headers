#pragma once

#include "../../../util/BlockPos.h"
#include "../../unmapped/ScriptEngine.h"
#include "./ScriptEventData.h"
#include "../../../actor/unmapped/ActorUniqueID.h"
#include "../../ScriptObjectHandle.h"
#include <string>


class ScriptServerBlockDestructionStoppedEvent : ScriptEventData {

public:
    static long mHash;

    virtual ~ScriptServerBlockDestructionStoppedEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerBlockDestructionStoppedEvent();
    void setActorId(ActorUniqueID const&);
    void setBlockPos(BlockPos const&);
    void setProgress(float);
    std::string getName();
};
