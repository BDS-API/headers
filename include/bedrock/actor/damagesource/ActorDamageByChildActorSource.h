#pragma once

#include "../Actor"
#include "../../block/unmapped/BlockSource"


class ActorDamageByChildActorSource : ActorDamageByActorSource {

public:
    ActorDamageByChildActorSource::~ActorDamageByChildActorSource()
    virtual bool isChildEntitySource()const;
    virtual void getDeathMessage(std::string, Actor *)const;
    virtual void getDamagingEntityIsCreative()const;
    virtual void getDamagingEntityIsWorldBuilder()const;
    virtual void getDamagingEntityUniqueID()const;
    virtual void getDamagingEntityType()const;
    virtual void getDamagingEntityCategories()const;
    virtual void clone()const;

    ActorDamageByChildActorSource(Actor &, Actor &, ActorDamageCause);
    ActorDamageByChildActorSource(BlockSource &, ActorDamageCause);
};
