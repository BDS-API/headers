#pragma once

#include "../../unmapped/Block"
#include "../../unmapped/MobEffectInstance"
#include "../../unmapped/ActorDefinitionGroup"
#include "../nbt/CompoundTag"
#include "damagesource/ActorDamageSource"


class EnderMan : Monster {

public:
    static long mMayTake;
    static long mMayTakeIsSetup;
    static long SPEED_MODIFIER_ATTACKING_UUID;
    static long SPEED_MODIFIER_ATTACKING;

    virtual EnderMan::~EnderMan();
    virtual void normalTick(void);
    virtual void shouldRender(void)const;
    virtual bool canBeAffectedByArrow(MobEffectInstance const&)const;
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void resolveDeathLoot(int, ActorDamageSource const&);
    virtual void getAmbientSound(void);
    virtual void hurtEffects(ActorDamageSource const&, int, bool, bool);
    virtual void aiStep(void);
    virtual void newServerAiStep(void);

    EnderMan(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void shutdown(void);
    void getCarryingBlock(void);
    void setCarryingBlock(Block const&);
    void _teleport(void);
};
