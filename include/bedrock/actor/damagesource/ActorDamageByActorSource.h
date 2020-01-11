#pragma once

class ActorDamageByActorSource : ActorDamageSource {

public:
    virtual ActorDamageByActorSource::~ActorDamageByActorSource();
    virtual bool isEntitySource(void)const;
    virtual void getDeathMessage(std::string, Actor *)const;
    virtual void getIsCreative(void)const;
    virtual void getIsWorldBuilder(void)const;
    virtual void getEntityUniqueID(void)const;
    virtual void getEntityType(void)const;
    virtual void getEntityCategories(void)const;
    virtual void getDamagingEntityUniqueID(void)const;
    virtual void getDamagingEntityType(void)const;
    virtual void clone(void)const;

    ActorDamageByActorSource(Actor &, ActorDamageCause);
    ActorDamageByActorSource(BlockSource &, ActorDamageCause);
};
