#pragma once

#include "unmapped/ActorDefinitionIdentifier.h"
#include "./Mob.h"
#include "../../unmapped/VariantParameterList.h"
#include "../../unmapped/DataLoadHelper.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "../item/Item.h"
#include "../nbt/CompoundTag.h"


class VillagerBase : Mob {

public:
//  virtual void reloadComponents(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual ~VillagerBase();
    virtual void interactPreventDefault();
    virtual void onLightningHit();
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void _onSizeUpdated();
    virtual void useNewAi()const;
    virtual void _serverAiMobStep();

    VillagerBase(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void setChasing(bool);
    bool isChasing()const;
    bool isWillingToBreed(bool);
    void getBreedingStackIndex()const;
    void setWillingToBreed(bool);
    void consumeLoveFood();
//  void _addParticlesAroundSelf(ParticleType); //TODO: incomplete function definition
    void _wantsItem(Item const&);
    void stopGoals();
};
