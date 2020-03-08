#pragma once

#include "../../../util/BlockPos"
#include "../../ScriptObjectHandle"
#include "../../../actor/unmapped/ActorUniqueID"
#include "../../unmapped/ScriptEngine"


class ScriptServerBlockDestructionStartedEvent : ScriptEventData {

public:
    static long mHash;

    virtual ScriptServerBlockDestructionStartedEvent::~ScriptServerBlockDestructionStartedEvent()
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerBlockDestructionStartedEvent(void);
    void setActorId(ActorUniqueID const&);
    void setBlockPos(BlockPos const&);
};
