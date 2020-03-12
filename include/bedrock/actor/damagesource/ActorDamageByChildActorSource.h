#pragma once

#include "../Actor.h"
#include "../../block/unmapped/BlockSource.h"
#include "ActorDamageByActorSource.h"
#include <string>


class ActorDamageByChildActorSource : ActorDamageByActorSource {

public:
    virtual void getDeathMessage(std::string, Actor *)const;
    virtual void getDamagingEntityUniqueID()const;
    virtual void getDamagingEntityIsCreative()const;
    ~ActorDamageByChildActorSource();
    virtual void getDamagingEntityCategories()const;
    virtual void getDamagingEntityType()const;
    virtual void clone()const;
    virtual void getDamagingEntityIsWorldBuilder()const;
    virtual bool isChildEntitySource()const;
//  ActorDamageByChildActorSource(Actor &, Actor &, ActorDamageCause); //TODO: incomplete function definition
//  ActorDamageByChildActorSource(BlockSource &, ActorDamageCause); //TODO: incomplete function definition
};
