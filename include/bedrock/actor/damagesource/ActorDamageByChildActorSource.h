#pragma once

#include "../../block/unmapped/BlockSource.h"
#include "./ActorDamageByActorSource.h"
#include "../Actor.h"
#include <string>


class ActorDamageByChildActorSource : ActorDamageByActorSource {

public:
    virtual ~ActorDamageByChildActorSource();
    virtual bool isChildEntitySource()const;
    virtual void getDeathMessage(std::string, Actor *)const;
    virtual void getDamagingEntityIsCreative()const;
    virtual void getDamagingEntityIsWorldBuilder()const;
    virtual void getDamagingEntityUniqueID()const;
    virtual void getDamagingEntityType()const;
    virtual void getDamagingEntityCategories()const;
    virtual void clone()const;

//  ActorDamageByChildActorSource(Actor &, Actor &, ActorDamageCause); //TODO: incomplete function definition
//  ActorDamageByChildActorSource(BlockSource &, ActorDamageCause); //TODO: incomplete function definition
};
