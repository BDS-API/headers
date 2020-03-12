#pragma once

#include <string>
#include "../../unmapped/ScriptEngine.h"
#include "../../../util/BlockPos.h"
#include "../../ScriptObjectHandle.h"
#include "ScriptEventData.h"
#include "../../../actor/unmapped/ActorUniqueID.h"


class ScriptServerPlayerDestroyedBlockEvent : ScriptEventData {

public:
    static long mHash;

    ~ScriptServerPlayerDestroyedBlockEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
    ScriptServerPlayerDestroyedBlockEvent();
    void getHash();
    void setBlockIdentifier(std::string);
    void setBlockPos(BlockPos const&);
    void setActorId(ActorUniqueID const&);
    std::string getName();
};
