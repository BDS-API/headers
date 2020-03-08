#pragma once

#include "../../block/unmapped/BlockSource"
#include "../Actor"


class ActorDamageByActorSource : ActorDamageSource {

public:
    virtual ActorDamageByActorSource::~ActorDamageByActorSource()
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

    ActorDamageByActorSource(Actor &, ActorDamageCause);
    ActorDamageByActorSource(BlockSource &, ActorDamageCause);
};
