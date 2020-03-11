#pragma once

#include "../../../util/BlockPos.h"
#include "../../unmapped/ScriptEngine.h"
#include "./ScriptEventData.h"
#include "../../../actor/unmapped/ActorUniqueID.h"
#include "../../ScriptObjectHandle.h"
#include <string>


class ScriptServerPlayerPlacedBlockEvent : ScriptEventData {

public:
    static long mHash;

    virtual ~ScriptServerPlayerPlacedBlockEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerPlayerPlacedBlockEvent();
    void setActorId(ActorUniqueID const&);
    void setBlockPos(BlockPos const&);
    std::string getName();
};
