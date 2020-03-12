#pragma once

#include "Mob.h"


class VillagerBase : Mob {

public:
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void interactPreventDefault();
    virtual void _serverAiMobStep();
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition
    ~VillagerBase();
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
//  virtual void reloadComponents(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void useNewAi()const;
    virtual void _onSizeUpdated();
    virtual void onLightningHit();
    bool isWillingToBreed(bool);
    void stopGoals();
    void setWillingToBreed(bool);
    void getBreedingStackIndex()const;
    bool isChasing()const;
    void setChasing(bool);
//  void _addParticlesAroundSelf(ParticleType); //TODO: incomplete function definition
    VillagerBase(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void consumeLoveFood();
    void _wantsItem(Item const&);
};
