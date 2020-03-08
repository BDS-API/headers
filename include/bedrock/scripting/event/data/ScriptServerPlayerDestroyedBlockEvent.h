#pragma once

#include "../../unmapped/ScriptEngine"
#include "../../../actor/unmapped/ActorUniqueID"
#include "../../ScriptObjectHandle"
#include "../../../util/BlockPos"


class ScriptServerPlayerDestroyedBlockEvent : ScriptEventData {

public:
    static long mHash;

    ScriptServerPlayerDestroyedBlockEvent::~ScriptServerPlayerDestroyedBlockEvent()
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerPlayerDestroyedBlockEvent(void);
    void setActorId(ActorUniqueID const&);
    void setBlockPos(BlockPos const&);
    void setBlockIdentifier(std::string);
};
