#pragma once

#include <string>
#include "ScriptEventData.h"


class ScriptServerBlockMovedByPistonEvent : ScriptEventData {

public:
    static long mHash;

    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
    ~ScriptServerBlockMovedByPistonEvent();
    void setPistonAction(std::string);
    std::string getName();
    void setPistonPos(BlockPos const&);
    ScriptServerBlockMovedByPistonEvent();
    void getHash();
    void setBlockPos(BlockPos const&);
};
