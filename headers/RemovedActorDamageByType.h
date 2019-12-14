#pragma once

class RemovedActorDamageByType : ActorDamageSource {

public:
    virtual ~RemovedActorDamageByType();
    virtual void getDeathMessage(std::string, Actor *)const;
    virtual void getEntityType(void)const;
    virtual void clone(void)const;

    void RemovedActorDamageByType(ActorDamageCause, ActorType);
};
