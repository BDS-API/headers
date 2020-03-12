#pragma once

#include "../../unmapped/ScriptEngine.h"
#include "../../../util/BlockPos.h"
#include "../../ScriptObjectHandle.h"
#include "ScriptEventData.h"
#include "../../../actor/unmapped/ActorUniqueID.h"


class ScriptServerBlockInteractedWithEvent : ScriptEventData {

public:
    static long mHash;

    ~ScriptServerBlockInteractedWithEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
    std::string getName();
    ScriptServerBlockInteractedWithEvent();
    void setActorId(ActorUniqueID const&);
    void setBlockPos(BlockPos const&);
    void getHash();
};
