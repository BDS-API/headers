#pragma once

#include "../../../util/BlockPos.h"
#include "../../unmapped/ScriptEngine.h"
#include "./ScriptEventData.h"
#include "../../../actor/unmapped/ActorUniqueID.h"
#include "../../ScriptObjectHandle.h"
#include <string>


class ScriptServerBlockInteractedWithEvent : ScriptEventData {

public:
    static long mHash;

    virtual ~ScriptServerBlockInteractedWithEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerBlockInteractedWithEvent();
    void setActorId(ActorUniqueID const&);
    void setBlockPos(BlockPos const&);
    std::string getName();
};
