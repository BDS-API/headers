#pragma once

#include "../Actor.h"
#include "ActorDamageSource.h"
#include <string>


class RemovedActorDamageByType : ActorDamageSource {

public:
    virtual void clone()const;
    ~RemovedActorDamageByType();
    virtual void getDeathMessage(std::string, Actor *)const;
    virtual void getEntityType()const;
//  RemovedActorDamageByType(ActorDamageCause, ActorType); //TODO: incomplete function definition
};
