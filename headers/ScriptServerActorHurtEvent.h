#pragma once

class ScriptServerActorHurtEvent : ScriptEventData {

public:
    static long ScriptServerActorHurtEvent::mHash;

    virtual ~ScriptServerActorHurtEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash(void);
    void ScriptServerActorHurtEvent(void);
    void setActorId(ActorUniqueID const&);
    void setAttackerId(ActorUniqueID const&);
    void setBlockPos(BlockPos const&);
    void setCause(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void setProjectile(ActorType const&);
    void setDamage(int);
    void setAbsorbedDamage(int);
};
