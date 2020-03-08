#pragma once

#include "../../unmapped/ScriptEngine"
#include "../../../actor/unmapped/ActorUniqueID"
#include "../../ScriptObjectHandle"
#include "../../../util/BlockPos"


class ScriptServerBlockDestructionStoppedEvent : ScriptEventData {

public:
    static long mHash;

    ScriptServerBlockDestructionStoppedEvent::~ScriptServerBlockDestructionStoppedEvent()
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerBlockDestructionStoppedEvent(void);
    void setActorId(ActorUniqueID const&);
    void setBlockPos(BlockPos const&);
    void setProgress(float);
};
