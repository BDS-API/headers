#pragma once

#include "../Actor.h"
#include "../../block/unmapped/BlockSource.h"
#include "ActorDamageSource.h"
#include <string>


class ActorDamageByActorSource : ActorDamageSource {

public:
    virtual void getDamagingEntityUniqueID()const;
    virtual void getEntityCategories()const;
    virtual void getEntityType()const;
    virtual void getDamagingEntityType()const;
    virtual void clone()const;
    virtual bool isEntitySource()const;
    virtual void getEntityUniqueID()const;
    virtual void getIsWorldBuilder()const;
    virtual void getIsCreative()const;
    ~ActorDamageByActorSource();
    virtual void getDeathMessage(std::string, Actor *)const;
//  ActorDamageByActorSource(Actor &, ActorDamageCause); //TODO: incomplete function definition
//  ActorDamageByActorSource(BlockSource &, ActorDamageCause); //TODO: incomplete function definition
};
