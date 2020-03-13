#pragma once

#include "AbstractArrow.h"
#include "../../unmapped/MobEffectInstance.h"


class Arrow : AbstractArrow {

public:
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN5Arrow15reloadHardcodedEN5Actor20InitializationMethodERK20VariantParameterList
    ~Arrow(); // _ZN5ArrowD2Ev
    virtual void normalTick(); // _ZN5Arrow10normalTickEv
    virtual void playerTouch(Player &); // _ZN5Arrow11playerTouchER6Player
    virtual void setAuxValue(int); // _ZN5Arrow11setAuxValueEi
    virtual bool canMakeStepSound()const; // _ZNK5Arrow16canMakeStepSoundEv
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &); // _ZN5Arrow22readAdditionalSaveDataERK11CompoundTagR14DataLoadHelper
    virtual void addAdditionalSaveData(CompoundTag &); // _ZN5Arrow21addAdditionalSaveDataER11CompoundTag
    virtual void shoot(Vec3 const&, float, float, Vec3 const&); // _ZN5Arrow5shootERK4Vec3ffS2_
    virtual void _getPickupItem()const; // _ZNK5Arrow14_getPickupItemEv
    virtual void applyParticleColor(Particle *); // _ZN5Arrow18applyParticleColorEP8Particle
    virtual void getEffectColor(); // _ZN5Arrow14getEffectColorEv
    Arrow(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN5ArrowC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
    void _defineEntityData(); // _ZN5Arrow17_defineEntityDataEv
    void setEnchantPower(int); // _ZN5Arrow15setEnchantPowerEi
    void getEnchantPower()const; // _ZNK5Arrow15getEnchantPowerEv
    void setEnchantPunch(int); // _ZN5Arrow15setEnchantPunchEi
    void getEnchantPunch()const; // _ZNK5Arrow15getEnchantPunchEv
    void setEnchantFlame(int); // _ZN5Arrow15setEnchantFlameEi
    void getEnchantFlame()const; // _ZNK5Arrow15getEnchantFlameEv
    void getAuxValue()const; // _ZNK5Arrow11getAuxValueEv
    void getEnchantInfinity()const; // _ZNK5Arrow18getEnchantInfinityEv
    void setEnchantInfinity(int); // _ZN5Arrow18setEnchantInfinityEi
    void addMobEffect(MobEffectInstance); // _ZN5Arrow12addMobEffectE17MobEffectInstance
    void setCritical(bool); // _ZN5Arrow11setCriticalEb
    bool isCritical()const; // _ZNK5Arrow10isCriticalEv
    void _readItemEnchants(ItemStack const&); // _ZN5Arrow17_readItemEnchantsERK9ItemStack
    void getEffects()const; // _ZNK5Arrow10getEffectsEv
    void getEffectCount()const; // _ZNK5Arrow14getEffectCountEv
};
