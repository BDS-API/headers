#pragma once

#include "./ActorDamageSource.h"
#include "../../block/unmapped/BlockSource.h"
#include "../Actor.h"
#include <string>


class ActorDamageByActorSource : ActorDamageSource {

public:
    virtual ~ActorDamageByActorSource();
    virtual bool isEntitySource()const;
    virtual void getDeathMessage(std::string, Actor *)const;
    virtual void getIsCreative()const;
    virtual void getIsWorldBuilder()const;
    virtual void getEntityUniqueID()const;
    virtual void getEntityType()const;
    virtual void getEntityCategories()const;
    virtual void getDamagingEntityUniqueID()const;
    virtual void getDamagingEntityType()const;
    virtual void clone()const;

//  ActorDamageByActorSource(Actor &, ActorDamageCause); //TODO: incomplete function definition
//  ActorDamageByActorSource(BlockSource &, ActorDamageCause); //TODO: incomplete function definition
};
