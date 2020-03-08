#pragma once

#include "../Actor"


class RemovedActorDamageByType : ActorDamageSource {

public:
    RemovedActorDamageByType::~RemovedActorDamageByType()
    virtual void getDeathMessage(std::string, Actor *)const;
    virtual void getEntityType()const;
    virtual void clone()const;

    RemovedActorDamageByType(ActorDamageCause, ActorType);
};
