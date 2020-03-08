#pragma once

#include "../../../util/BlockPos"
#include "../../ScriptObjectHandle"
#include "../../../actor/unmapped/ActorUniqueID"
#include "../../unmapped/ScriptEngine"


class ScriptServerPlayerDestroyedBlockEvent : ScriptEventData {

public:
    static long mHash;

    virtual ScriptServerPlayerDestroyedBlockEvent::~ScriptServerPlayerDestroyedBlockEvent()
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerPlayerDestroyedBlockEvent(void);
    void setActorId(ActorUniqueID const&);
    void setBlockPos(BlockPos const&);
    void setBlockIdentifier(std::string);
};
