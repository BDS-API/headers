#pragma once

#include <string>
#include "../../unmapped/ScriptEngine.h"
#include "../../../util/BlockPos.h"
#include "../../ScriptObjectHandle.h"
#include "ScriptEventData.h"


class ScriptServerBlockMovedByPistonEvent : ScriptEventData {

public:
    static long mHash;

    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
    ~ScriptServerBlockMovedByPistonEvent();
    ScriptServerBlockMovedByPistonEvent();
    void getHash();
    std::string getName();
    void setBlockPos(BlockPos const&);
    void setPistonAction(std::string);
    void setPistonPos(BlockPos const&);
};
