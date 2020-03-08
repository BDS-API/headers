#pragma once

#include "../../../util/BlockPos"
#include "../../ScriptObjectHandle"
#include "../../../actor/unmapped/ActorUniqueID"
#include "../../unmapped/ScriptEngine"


class ScriptServerBlockExplodedEvent : ScriptEventData {

public:
    static long mHash;

    virtual ScriptServerBlockExplodedEvent::~ScriptServerBlockExplodedEvent()
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerBlockExplodedEvent(void);
    void setActorId(ActorUniqueID const&);
    void setBlockPos(BlockPos const&);
    void setCause(std::string const&);
    void setBlockIdentifier(std::string const&);
};
