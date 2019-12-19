#pragma once

class VillagerBase : Mob {

public:
    virtual void reloadComponents(Actor::InitializationMethod, VariantParameterList const&);
    virtual VillagerBase::~VillagerBase();
    virtual void interactPreventDefault(void);
    virtual void onLightningHit(void);
    virtual void handleEntityEvent(ActorEvent, int);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void _onSizeUpdated(void);
    virtual void useNewAi(void)const;
    virtual void _serverAiMobStep(void);

    VillagerBase(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void setChasing(bool);
    bool isChasing(void)const;
    bool isWillingToBreed(bool);
    void getBreedingStackIndex(void)const;
    void setWillingToBreed(bool);
    void consumeLoveFood(void);
    void _addParticlesAroundSelf(ParticleType);
    void _wantsItem(Item const&);
    void stopGoals(void);
};
