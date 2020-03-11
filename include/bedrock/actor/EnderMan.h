#pragma once

#include "../../unmapped/MobEffectInstance.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "damagesource/ActorDamageSource.h"
#include "./Monster.h"
#include "../../unmapped/DataLoadHelper.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "../nbt/CompoundTag.h"
#include "../../unmapped/Block.h"


class EnderMan : Monster {

public:
    static long mMayTake;
    static long mMayTakeIsSetup;
    static long SPEED_MODIFIER_ATTACKING_UUID;
    static long SPEED_MODIFIER_ATTACKING;

    virtual ~EnderMan();
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
