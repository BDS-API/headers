#pragma once

class RemovedActorDamageByType : ActorDamageSource {

public:
    virtual ~RemovedActorDamageByType();
    virtual void getDeathMessage(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, Actor *)const;
    virtual void getEntityType(void)const;
    virtual void clone(void)const;

    void RemovedActorDamageByType(ActorDamageCause, ActorType);
};
