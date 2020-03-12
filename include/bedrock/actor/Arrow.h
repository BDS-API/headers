#pragma once

#include "Player.h"
#include "../../unmapped/VariantParameterList.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "../../unmapped/MobEffectInstance.h"
#include "AbstractArrow.h"
#include "../util/Vec3.h"
#include "../nbt/CompoundTag.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../../unmapped/Particle.h"
#include "../item/ItemStack.h"
#include "../../unmapped/DataLoadHelper.h"


class Arrow : AbstractArrow {

public:
    virtual bool canMakeStepSound()const;
    ~Arrow();
    virtual void playerTouch(Player &);
    virtual void applyParticleColor(Particle *);
    virtual void getEffectColor();
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void normalTick();
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void _getPickupItem()const;
    virtual void shoot(Vec3 const&, float, float, Vec3 const&);
    virtual void setAuxValue(int);
    void setEnchantPower(int);
    bool isCritical()const;
    void addMobEffect(MobEffectInstance);
    void getEnchantPunch()const;
    void setEnchantFlame(int);
    void getEnchantFlame()const;
    void getEnchantPower()const;
    void getAuxValue()const;
    void setEnchantPunch(int);
    void _defineEntityData();
    void setEnchantInfinity(int);
    void getEffects()const;
    void setCritical(bool);
    void _readItemEnchants(ItemStack const&);
    Arrow(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void getEnchantInfinity()const;
    void getEffectCount()const;
};
