#pragma once

#include "../../../util/BlockPos.h"
#include "../../unmapped/ScriptEngine.h"
#include "./ScriptEventData.h"
#include "../../../actor/unmapped/ActorUniqueID.h"
#include "../../ScriptObjectHandle.h"
#include <string>


class ScriptServerBlockExplodedEvent : ScriptEventData {

public:
    static long mHash;

    virtual ~ScriptServerBlockExplodedEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerBlockExplodedEvent();
    void setActorId(ActorUniqueID const&);
    void setBlockPos(BlockPos const&);
    void setCause(std::string const&);
    void setBlockIdentifier(std::string const&);
    std::string getName();
};
