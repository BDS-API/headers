#pragma once

#include "./ActorDamageSource.h"
#include "../Actor.h"
#include <string>


class RemovedActorDamageByType : ActorDamageSource {

public:
    virtual ~RemovedActorDamageByType();
    virtual void getDeathMessage(std::string, Actor *)const;
    virtual void getEntityType()const;
    virtual void clone()const;

//  RemovedActorDamageByType(ActorDamageCause, ActorType); //TODO: incomplete function definition
};
