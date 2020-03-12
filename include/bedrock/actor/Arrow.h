#pragma once

#include "AbstractArrow.h"
#include "../../unmapped/MobEffectInstance.h"


class Arrow : AbstractArrow {

public:
    virtual void applyParticleColor(Particle *);
    ~Arrow();
    virtual void addAdditionalSaveData(CompoundTag &);
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void playerTouch(Player &);
    virtual bool canMakeStepSound()const;
    virtual void shoot(Vec3 const&, float, float, Vec3 const&);
    virtual void _getPickupItem()const;
    virtual void setAuxValue(int);
    virtual void getEffectColor();
    virtual void normalTick();
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    void _defineEntityData();
    void setEnchantFlame(int);
    void getEffectCount()const;
    void addMobEffect(MobEffectInstance);
    void getEnchantFlame()const;
    void _readItemEnchants(ItemStack const&);
    void getEnchantPunch()const;
    Arrow(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    bool isCritical()const;
    void getEffects()const;
    void setEnchantPunch(int);
    void getAuxValue()const;
    void getEnchantPower()const;
    void getEnchantInfinity()const;
    void setEnchantInfinity(int);
    void setEnchantPower(int);
    void setCritical(bool);
};
