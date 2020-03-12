#pragma once

#include <string>
#include "../../unmapped/ScriptEngine.h"
#include "../../../util/BlockPos.h"
#include "../../ScriptObjectHandle.h"
#include "ScriptEventData.h"
#include "../../../actor/unmapped/ActorUniqueID.h"


class ScriptServerBlockExplodedEvent : ScriptEventData {

public:
    static long mHash;

    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
    ~ScriptServerBlockExplodedEvent();
    ScriptServerBlockExplodedEvent();
    std::string getName();
    void setBlockIdentifier(std::string const&);
    void getHash();
    void setBlockPos(BlockPos const&);
    void setCause(std::string const&);
    void setActorId(ActorUniqueID const&);
};
