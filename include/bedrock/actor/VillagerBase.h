#pragma once

#include "../item/Item.h"
#include "../../unmapped/VariantParameterList.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../nbt/CompoundTag.h"
#include "Mob.h"
#include "../../unmapped/DataLoadHelper.h"


class VillagerBase : Mob {

public:
    virtual void onLightningHit();
    virtual void _serverAiMobStep();
    virtual void addAdditionalSaveData(CompoundTag &);
//  virtual void reloadComponents(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void _onSizeUpdated();
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void useNewAi()const;
    virtual void interactPreventDefault();
    ~VillagerBase();
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition
    bool isWillingToBreed(bool);
    bool isChasing()const;
    void setChasing(bool);
    void stopGoals();
//  void _addParticlesAroundSelf(ParticleType); //TODO: incomplete function definition
    void getBreedingStackIndex()const;
    void _wantsItem(Item const&);
    void setWillingToBreed(bool);
    VillagerBase(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void consumeLoveFood();
};
