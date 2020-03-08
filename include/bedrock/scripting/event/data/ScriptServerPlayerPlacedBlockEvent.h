#pragma once

#include "../../../util/BlockPos"
#include "../../ScriptObjectHandle"
#include "../../../actor/unmapped/ActorUniqueID"
#include "../../unmapped/ScriptEngine"


class ScriptServerPlayerPlacedBlockEvent : ScriptEventData {

public:
    static long mHash;

    virtual ScriptServerPlayerPlacedBlockEvent::~ScriptServerPlayerPlacedBlockEvent()
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerPlayerPlacedBlockEvent(void);
    void setActorId(ActorUniqueID const&);
    void setBlockPos(BlockPos const&);
};
