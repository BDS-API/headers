#pragma once

#include "../../unmapped/ScriptEngine"
#include "../../../actor/unmapped/ActorUniqueID"
#include "../../ScriptObjectHandle"
#include "../../../util/BlockPos"


class ScriptServerPlayerPlacedBlockEvent : ScriptEventData {

public:
    static long mHash;

    ScriptServerPlayerPlacedBlockEvent::~ScriptServerPlayerPlacedBlockEvent()
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerPlayerPlacedBlockEvent(void);
    void setActorId(ActorUniqueID const&);
    void setBlockPos(BlockPos const&);
};
