#pragma once

class ScriptServerActorDeathEvent : ScriptEventData {

public:
    static long ScriptServerActorDeathEvent::mHash;

    virtual ~ScriptServerActorDeathEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash(void);
    void ScriptServerActorDeathEvent(void);
    void setActorId(ActorUniqueID const&);
    void setKillerId(ActorUniqueID const&);
    void setBlockPos(BlockPos const&);
    void setCause(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void setProjectile(ActorType const&);
};
