#pragma once

#include "../../unmapped/ScriptEngine"
#include "../../../actor/unmapped/ActorUniqueID"
#include "../../ScriptObjectHandle"
#include "../../../util/BlockPos"


class ScriptServerBlockDestructionStartedEvent : ScriptEventData {

public:
    static long mHash;

    ScriptServerBlockDestructionStartedEvent::~ScriptServerBlockDestructionStartedEvent()
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerBlockDestructionStartedEvent(void);
    void setActorId(ActorUniqueID const&);
    void setBlockPos(BlockPos const&);
};
