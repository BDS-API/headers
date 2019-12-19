#pragma once

class ScriptServerBlockMovedByPistonEvent : ScriptEventData {

public:
    static long mHash;

    virtual ScriptServerBlockMovedByPistonEvent::~ScriptServerBlockMovedByPistonEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash(void);
    ScriptServerBlockMovedByPistonEvent(void);
    void setPistonPos(BlockPos const&);
    void setBlockPos(BlockPos const&);
    void setPistonAction(std::string);
};
