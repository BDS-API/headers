#pragma once

class ActorDamageByChildActorSource : ActorDamageByActorSource {

public:
    virtual ActorDamageByChildActorSource::~ActorDamageByChildActorSource();
    virtual bool isChildEntitySource(void)const;
    virtual void getDeathMessage(std::string, Actor *)const;
    virtual void getDamagingEntityIsCreative(void)const;
    virtual void getDamagingEntityIsWorldBuilder(void)const;
    virtual void getDamagingEntityUniqueID(void)const;
    virtual void getDamagingEntityType(void)const;
    virtual void getDamagingEntityCategories(void)const;
    virtual void clone(void)const;

    ActorDamageByChildActorSource(Actor &, Actor &, ActorDamageCause);
    ActorDamageByChildActorSource(BlockSource &, ActorDamageCause);
};
