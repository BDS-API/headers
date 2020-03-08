#pragma once

#include "../../../../unmapped/BlockPos"
#include "../../../../unmapped/ScriptEngine"
#include "../../../../unmapped/ActorUniqueID"


class ScriptServerBlockDestructionStoppedEvent : ScriptEventData {

public:
    static long mHash;

    virtual ScriptServerBlockDestructionStoppedEvent::~ScriptServerBlockDestructionStoppedEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash(void);
    ScriptServerBlockDestructionStoppedEvent(void);
    void setActorId(ActorUniqueID const&);
    void setBlockPos(BlockPos const&);
    void setProgress(float);
};
