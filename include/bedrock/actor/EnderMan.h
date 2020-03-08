#pragma once

#include "damagesource/ActorDamageSource"
#include "../nbt/CompoundTag"
#include "../../unmapped/MobEffectInstance"
#include "unmapped/ActorDefinitionGroup"
#include "../../unmapped/Block"
#include "unmapped/ActorDefinitionIdentifier"
#include "../../unmapped/DataLoadHelper"


class EnderMan : Monster {

public:
    static long mMayTake;
    static long mMayTakeIsSetup;
    static long SPEED_MODIFIER_ATTACKING_UUID;
    static long SPEED_MODIFIER_ATTACKING;

    virtual EnderMan::~EnderMan()
    virtual void normalTick();
    virtual void shouldRender()const;
    virtual bool canBeAffectedByArrow(MobEffectInstance const&)const;
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void resolveDeathLoot(int, ActorDamageSource const&);
    virtual void getAmbientSound();
    virtual void hurtEffects(ActorDamageSource const&, int, bool, bool);
    virtual void aiStep();
    virtual void newServerAiStep();

    EnderMan(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void shutdown();
    void getCarryingBlock();
    void setCarryingBlock(Block const&);
    void _teleport();
};
