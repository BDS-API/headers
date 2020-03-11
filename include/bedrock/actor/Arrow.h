#pragma once

#include "../../unmapped/MobEffectInstance.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../item/ItemStack.h"
#include "../../unmapped/Particle.h"
#include "../../unmapped/VariantParameterList.h"
#include "../util/Vec3.h"
#include "./AbstractArrow.h"
#include "../../unmapped/DataLoadHelper.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "../nbt/CompoundTag.h"
#include "./Player.h"


class Arrow : AbstractArrow {

public:
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual ~Arrow();
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
