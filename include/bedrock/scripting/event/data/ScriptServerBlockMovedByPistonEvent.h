#pragma once

#include "../../../util/BlockPos.h"
#include "../../unmapped/ScriptEngine.h"
#include "./ScriptEventData.h"
#include "../../ScriptObjectHandle.h"
#include <string>


class ScriptServerBlockMovedByPistonEvent : ScriptEventData {

public:
    static long mHash;

    virtual ~ScriptServerBlockMovedByPistonEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerBlockMovedByPistonEvent();
    void setPistonPos(BlockPos const&);
    void setBlockPos(BlockPos const&);
    void setPistonAction(std::string);
    std::string getName();
};
