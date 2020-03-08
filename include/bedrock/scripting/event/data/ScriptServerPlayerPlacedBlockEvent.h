#pragma once

#include "../../../../unmapped/BlockPos"
#include "../../../../unmapped/ActorUniqueID"
#include "../../../../unmapped/ScriptEngine"


class ScriptServerPlayerPlacedBlockEvent : ScriptEventData {

public:
    static long mHash;

    virtual ScriptServerPlayerPlacedBlockEvent::~ScriptServerPlayerPlacedBlockEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash(void);
    ScriptServerPlayerPlacedBlockEvent(void);
    void setActorId(ActorUniqueID const&);
    void setBlockPos(BlockPos const&);
};
