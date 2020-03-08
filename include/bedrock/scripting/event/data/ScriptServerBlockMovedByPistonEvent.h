#pragma once

#include "../../unmapped/ScriptEngine"
#include "../../ScriptObjectHandle"
#include "../../../util/BlockPos"


class ScriptServerBlockMovedByPistonEvent : ScriptEventData {

public:
    static long mHash;

    ScriptServerBlockMovedByPistonEvent::~ScriptServerBlockMovedByPistonEvent()
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerBlockMovedByPistonEvent(void);
    void setPistonPos(BlockPos const&);
    void setBlockPos(BlockPos const&);
    void setPistonAction(std::string);
};
