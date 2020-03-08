#pragma once

#include "../../../util/BlockPos"
#include "../../ScriptObjectHandle"
#include "../../../actor/unmapped/ActorUniqueID"
#include "../../unmapped/ScriptEngine"


class ScriptServerBlockDestructionStoppedEvent : ScriptEventData {

public:
    static long mHash;

    virtual ScriptServerBlockDestructionStoppedEvent::~ScriptServerBlockDestructionStoppedEvent()
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerBlockDestructionStoppedEvent(void);
    void setActorId(ActorUniqueID const&);
    void setBlockPos(BlockPos const&);
    void setProgress(float);
};
