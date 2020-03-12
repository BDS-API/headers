#pragma once

#include "Monster.h"


class EnderMan : Monster {

public:
    static long mMayTake;
    static long mMayTakeIsSetup;
    static long SPEED_MODIFIER_ATTACKING_UUID;
    static long SPEED_MODIFIER_ATTACKING;

    virtual void hurtEffects(ActorDamageSource const&, int, bool, bool);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void resolveDeathLoot(int, ActorDamageSource const&);
    virtual void getAmbientSound();
    ~EnderMan();
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual bool canBeAffectedByArrow(MobEffectInstance const&)const;
    virtual void normalTick();
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void shouldRender()const;
    virtual void newServerAiStep();
    virtual void aiStep();
    void shutdown();
    EnderMan(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void getCarryingBlock();
    void _teleport();
    void setCarryingBlock(Block const&);
};
