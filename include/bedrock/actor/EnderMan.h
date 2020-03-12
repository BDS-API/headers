#pragma once

#include "unmapped/ActorDefinitionGroup.h"
#include "../../unmapped/MobEffectInstance.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../nbt/CompoundTag.h"
#include "../../unmapped/Block.h"
#include "damagesource/ActorDamageSource.h"
#include "../../unmapped/DataLoadHelper.h"
#include "Monster.h"


class EnderMan : Monster {

public:
    static long mMayTake;
    static long mMayTakeIsSetup;
    static long SPEED_MODIFIER_ATTACKING_UUID;
    static long SPEED_MODIFIER_ATTACKING;

    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void newServerAiStep();
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void hurtEffects(ActorDamageSource const&, int, bool, bool);
    virtual void normalTick();
    virtual bool canBeAffectedByArrow(MobEffectInstance const&)const;
    virtual void getAmbientSound();
    virtual void resolveDeathLoot(int, ActorDamageSource const&);
    virtual void shouldRender()const;
    virtual void aiStep();
    ~EnderMan();
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    void getCarryingBlock();
    void setCarryingBlock(Block const&);
    void shutdown();
    EnderMan(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void _teleport();
};
