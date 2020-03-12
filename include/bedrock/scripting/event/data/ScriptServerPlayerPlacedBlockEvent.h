#pragma once

#include "../../unmapped/ScriptEngine.h"
#include "../../../util/BlockPos.h"
#include "../../ScriptObjectHandle.h"
#include "ScriptEventData.h"
#include "../../../actor/unmapped/ActorUniqueID.h"


class ScriptServerPlayerPlacedBlockEvent : ScriptEventData {

public:
    static long mHash;

    ~ScriptServerPlayerPlacedBlockEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
    void setActorId(ActorUniqueID const&);
    void setBlockPos(BlockPos const&);
    ScriptServerPlayerPlacedBlockEvent();
    std::string getName();
    void getHash();
};
