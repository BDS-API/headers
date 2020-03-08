#pragma once

#include "../../../util/BlockPos"
#include "../../ScriptObjectHandle"
#include "../../unmapped/ScriptEngine"


class ScriptServerBlockMovedByPistonEvent : ScriptEventData {

public:
    static long mHash;

    virtual ScriptServerBlockMovedByPistonEvent::~ScriptServerBlockMovedByPistonEvent()
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerBlockMovedByPistonEvent(void);
    void setPistonPos(BlockPos const&);
    void setBlockPos(BlockPos const&);
    void setPistonAction(std::string);
};
