#pragma once

#include "../nbt/CompoundTag"
#include "unmapped/ActorDefinitionGroup"
#include "../../unmapped/MobEffectInstance"
#include "../../unmapped/VariantParameterList"
#include "../item/ItemStack"
#include "../util/Vec3"
#include "../../unmapped/Particle"
#include "unmapped/ActorDefinitionIdentifier"
#include "../../unmapped/DataLoadHelper"


class Arrow : AbstractArrow {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual Arrow::~Arrow()
    virtual void normalTick();
    virtual void playerTouch(Player &);
    virtual void setAuxValue(int);
    virtual bool canMakeStepSound()const;
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void shoot(Vec3 const&, float, float, Vec3 const&);
    virtual void _getPickupItem()const;
    virtual void applyParticleColor(Particle *);
    virtual void getEffectColor();

    Arrow(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void _defineEntityData();
    void setEnchantPower(int);
    void getEnchantPower()const;
    void setEnchantPunch(int);
    void getEnchantPunch()const;
    void setEnchantFlame(int);
    void getEnchantFlame()const;
    void getAuxValue()const;
    void getEnchantInfinity()const;
    void setEnchantInfinity(int);
    void addMobEffect(MobEffectInstance);
    void setCritical(bool);
    bool isCritical()const;
    void _readItemEnchants(ItemStack const&);
    void getEffects()const;
    void getEffectCount()const;
};
