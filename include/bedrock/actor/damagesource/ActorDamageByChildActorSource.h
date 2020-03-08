#pragma once

#include "../../block/unmapped/BlockSource"
#include "../Actor"


class ActorDamageByChildActorSource : ActorDamageByActorSource {

public:
    virtual ActorDamageByChildActorSource::~ActorDamageByChildActorSource()
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
