#pragma once

#include "../../unmapped/VariantParameterList"
#include "unmapped/ActorDefinitionGroup"
#include "../../unmapped/DataLoadHelper"
#include "unmapped/ActorDefinitionIdentifier"
#include "../item/Item"
#include "../nbt/CompoundTag"


class VillagerBase : Mob {

public:
    virtual void reloadComponents(Actor::InitializationMethod, VariantParameterList const&);
    VillagerBase::~VillagerBase()
    virtual void interactPreventDefault();
    virtual void onLightningHit();
    virtual void handleEntityEvent(ActorEvent, int);
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
    void _addParticlesAroundSelf(ParticleType);
    void _wantsItem(Item const&);
    void stopGoals();
};
