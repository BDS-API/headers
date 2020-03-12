#pragma once

#include <string>
#include "ActorDamageSource.h"


class ActorDamageByActorSource : ActorDamageSource {

public:
    ~ActorDamageByActorSource();
    virtual void getIsWorldBuilder()const;
    virtual void getEntityType()const;
    virtual void getDamagingEntityUniqueID()const;
    virtual void getIsCreative()const;
    virtual void getEntityUniqueID()const;
    virtual void getEntityCategories()const;
    virtual bool isEntitySource()const;
    virtual void getDeathMessage(std::string, Actor *)const;
    virtual void clone()const;
    virtual void getDamagingEntityType()const;
//  ActorDamageByActorSource(BlockSource &, ActorDamageCause); //TODO: incomplete function definition
//  ActorDamageByActorSource(Actor &, ActorDamageCause); //TODO: incomplete function definition
};
