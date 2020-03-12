#pragma once

#include "ActorDamageByActorSource.h"
#include <string>


class ActorDamageByChildActorSource : ActorDamageByActorSource {

public:
    ~ActorDamageByChildActorSource();
    virtual void getDamagingEntityCategories()const;
    virtual void getDamagingEntityIsWorldBuilder()const;
    virtual void getDamagingEntityUniqueID()const;
    virtual void clone()const;
    virtual bool isChildEntitySource()const;
    virtual void getDamagingEntityType()const;
    virtual void getDeathMessage(std::string, Actor *)const;
    virtual void getDamagingEntityIsCreative()const;
//  ActorDamageByChildActorSource(BlockSource &, ActorDamageCause); //TODO: incomplete function definition
//  ActorDamageByChildActorSource(Actor &, Actor &, ActorDamageCause); //TODO: incomplete function definition
};
