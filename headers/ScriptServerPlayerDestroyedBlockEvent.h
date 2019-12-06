#pragma once

class ScriptServerPlayerDestroyedBlockEvent : ScriptEventData {

public:
    static long ScriptServerPlayerDestroyedBlockEvent::mHash;

    virtual ~ScriptServerPlayerDestroyedBlockEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash(void);
    void ScriptServerPlayerDestroyedBlockEvent(void);
    void setActorId(ActorUniqueID const&);
    void setBlockPos(BlockPos const&);
    void setBlockIdentifier(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>);
};
