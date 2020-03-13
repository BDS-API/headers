#pragma once

#include "Monster.h"


class EnderMan : Monster {

public:
    static long mMayTake;
    static long mMayTakeIsSetup;
    static long SPEED_MODIFIER_ATTACKING_UUID;
    static long SPEED_MODIFIER_ATTACKING;

    ~EnderMan(); // _ZN8EnderManD2Ev
    virtual void normalTick(); // _ZN8EnderMan10normalTickEv
    virtual void shouldRender()const; // _ZNK8EnderMan12shouldRenderEv
    virtual bool canBeAffectedByArrow(MobEffectInstance const&)const; // _ZNK8EnderMan20canBeAffectedByArrowERK17MobEffectInstance
    virtual void _hurt(ActorDamageSource const&, int, bool, bool); // _ZN8EnderMan5_hurtERK17ActorDamageSourceibb
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &); // _ZN8EnderMan22readAdditionalSaveDataERK11CompoundTagR14DataLoadHelper
    virtual void addAdditionalSaveData(CompoundTag &); // _ZN8EnderMan21addAdditionalSaveDataER11CompoundTag
    virtual void resolveDeathLoot(int, ActorDamageSource const&); // _ZN8EnderMan16resolveDeathLootEiRK17ActorDamageSource
    virtual void getAmbientSound(); // _ZN8EnderMan15getAmbientSoundEv
    virtual void hurtEffects(ActorDamageSource const&, int, bool, bool); // _ZN8EnderMan11hurtEffectsERK17ActorDamageSourceibb
    virtual void aiStep(); // _ZN8EnderMan6aiStepEv
    virtual void newServerAiStep(); // _ZN8EnderMan15newServerAiStepEv
    EnderMan(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN8EnderManC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
    void shutdown(); // _ZN8EnderMan8shutdownEv
    void getCarryingBlock(); // _ZN8EnderMan16getCarryingBlockEv
    void setCarryingBlock(Block const&); // _ZN8EnderMan16setCarryingBlockERK5Block
    void _teleport(); // _ZN8EnderMan9_teleportEv
};
