#pragma once

#include "Mob.h"


class VillagerBase : Mob {

public:
//  virtual void reloadComponents(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN12VillagerBase16reloadComponentsEN5Actor20InitializationMethodERK20VariantParameterList
    ~VillagerBase(); // _ZN12VillagerBaseD2Ev
    virtual void interactPreventDefault(); // _ZN12VillagerBase22interactPreventDefaultEv
    virtual void onLightningHit(); // _ZN12VillagerBase14onLightningHitEv
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition // _ZN12VillagerBase17handleEntityEventE10ActorEventi
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &); // _ZN12VillagerBase22readAdditionalSaveDataERK11CompoundTagR14DataLoadHelper
    virtual void addAdditionalSaveData(CompoundTag &); // _ZN12VillagerBase21addAdditionalSaveDataER11CompoundTag
    virtual void _onSizeUpdated(); // _ZN12VillagerBase14_onSizeUpdatedEv
    virtual void useNewAi()const; // _ZNK12VillagerBase8useNewAiEv
    virtual void _serverAiMobStep(); // _ZN12VillagerBase16_serverAiMobStepEv
    VillagerBase(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN12VillagerBaseC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
    void setChasing(bool); // _ZN12VillagerBase10setChasingEb
    bool isChasing()const; // _ZNK12VillagerBase9isChasingEv
    bool isWillingToBreed(bool); // _ZN12VillagerBase16isWillingToBreedEb
    void getBreedingStackIndex()const; // _ZNK12VillagerBase21getBreedingStackIndexEv
    void setWillingToBreed(bool); // _ZN12VillagerBase17setWillingToBreedEb
    void consumeLoveFood(); // _ZN12VillagerBase15consumeLoveFoodEv
//  void _addParticlesAroundSelf(ParticleType); //TODO: incomplete function definition // _ZN12VillagerBase23_addParticlesAroundSelfE12ParticleType
    void _wantsItem(Item const&); // _ZN12VillagerBase10_wantsItemERK4Item
    void stopGoals(); // _ZN12VillagerBase9stopGoalsEv
};
