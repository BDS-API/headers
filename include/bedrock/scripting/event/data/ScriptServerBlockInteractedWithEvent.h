#pragma once

#include "../../unmapped/ScriptEngine"
#include "../../../actor/unmapped/ActorUniqueID"
#include "../../ScriptObjectHandle"
#include "../../../util/BlockPos"


class ScriptServerBlockInteractedWithEvent : ScriptEventData {

public:
    static long mHash;

    ScriptServerBlockInteractedWithEvent::~ScriptServerBlockInteractedWithEvent()
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerBlockInteractedWithEvent(void);
    void setActorId(ActorUniqueID const&);
    void setBlockPos(BlockPos const&);
};
