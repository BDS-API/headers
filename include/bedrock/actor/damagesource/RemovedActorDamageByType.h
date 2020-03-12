#pragma once

#include <string>
#include "ActorDamageSource.h"


class RemovedActorDamageByType : ActorDamageSource {

public:
    virtual void clone()const;
    virtual void getEntityType()const;
    virtual void getDeathMessage(std::string, Actor *)const;
    ~RemovedActorDamageByType();
//  RemovedActorDamageByType(ActorDamageCause, ActorType); //TODO: incomplete function definition
};
