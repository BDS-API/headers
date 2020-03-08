#pragma once

#include "../../unmapped/VariantParameterList"
#include "unmapped/ActorDefinitionGroup"
#include "../item/ItemStack"
#include "../../unmapped/DataLoadHelper"
#include "../../unmapped/Particle"
#include "../../unmapped/MobEffectInstance"
#include "../util/Vec3"
#include "unmapped/ActorDefinitionIdentifier"
#include "../nbt/CompoundTag"


class Arrow : AbstractArrow {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    Arrow::~Arrow()
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
