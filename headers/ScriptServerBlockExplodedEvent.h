#pragma once

class ScriptServerBlockExplodedEvent : ScriptEventData {

public:
    static long ScriptServerBlockExplodedEvent::mHash;

    virtual ~ScriptServerBlockExplodedEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash(void);
    void ScriptServerBlockExplodedEvent(void);
    void setActorId(ActorUniqueID const&);
    void setBlockPos(BlockPos const&);
    void setCause(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void setBlockIdentifier(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
};
