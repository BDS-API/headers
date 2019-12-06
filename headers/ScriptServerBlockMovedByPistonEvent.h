#pragma once

class ScriptServerBlockMovedByPistonEvent : ScriptEventData {

public:
    static long ScriptServerBlockMovedByPistonEvent::mHash;

    virtual ~ScriptServerBlockMovedByPistonEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash(void);
    void ScriptServerBlockMovedByPistonEvent(void);
    void setPistonPos(BlockPos const&);
    void setBlockPos(BlockPos const&);
    void setPistonAction(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>);
};
