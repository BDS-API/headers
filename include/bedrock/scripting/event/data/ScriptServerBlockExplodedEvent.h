#pragma once

#include "../../unmapped/ScriptEngine"
#include "../../../actor/unmapped/ActorUniqueID"
#include "../../ScriptObjectHandle"
#include "../../../util/BlockPos"


class ScriptServerBlockExplodedEvent : ScriptEventData {

public:
    static long mHash;

    ScriptServerBlockExplodedEvent::~ScriptServerBlockExplodedEvent()
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerBlockExplodedEvent(void);
    void setActorId(ActorUniqueID const&);
    void setBlockPos(BlockPos const&);
    void setCause(std::string const&);
    void setBlockIdentifier(std::string const&);
};
