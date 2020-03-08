#pragma once

#include "../../../../unmapped/BlockPos"
#include "../../../../unmapped/ScriptEngine"
#include "../../../../unmapped/ActorUniqueID"


class ScriptServerPlayerDestroyedBlockEvent : ScriptEventData {

public:
    static long mHash;

    virtual ScriptServerPlayerDestroyedBlockEvent::~ScriptServerPlayerDestroyedBlockEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash(void);
    ScriptServerPlayerDestroyedBlockEvent(void);
    void setActorId(ActorUniqueID const&);
    void setBlockPos(BlockPos const&);
    void setBlockIdentifier(std::string);
};
