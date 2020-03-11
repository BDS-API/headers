#pragma once

#include "../../../util/BlockPos.h"
#include "../../unmapped/ScriptEngine.h"
#include "./ScriptEventData.h"
#include "../../../actor/unmapped/ActorUniqueID.h"
#include "../../ScriptObjectHandle.h"
#include <string>


class ScriptServerPlayerDestroyedBlockEvent : ScriptEventData {

public:
    static long mHash;

    virtual ~ScriptServerPlayerDestroyedBlockEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerPlayerDestroyedBlockEvent();
    void setActorId(ActorUniqueID const&);
    void setBlockPos(BlockPos const&);
    void setBlockIdentifier(std::string);
    std::string getName();
};
