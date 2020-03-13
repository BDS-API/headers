#pragma once

#include "Monster.h"
#include "unmapped/ActorUniqueID.h"


class WitherBoss : Monster {

public:
    static long TIME_BEFORE_MOVING;
    static long MAX_HEALTH_CAP_UUID;

//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN10WitherBoss15reloadHardcodedEN5Actor20InitializationMethodERK20VariantParameterList
//  virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN10WitherBoss21reloadHardcodedClientEN5Actor20InitializationMethodERK20VariantParameterList
    ~WitherBoss(); // _ZN10WitherBossD2Ev
    virtual void remove(); // _ZN10WitherBoss6removeEv
    virtual void getFiringPos()const; // _ZNK10WitherBoss12getFiringPosEv
    virtual void startRiding(Actor &); // _ZN10WitherBoss11startRidingER5Actor
    virtual void makeStuckInBlock(float); // _ZN10WitherBoss16makeStuckInBlockEf
    virtual bool isInvulnerableTo(ActorDamageSource const&)const; // _ZNK10WitherBoss16isInvulnerableToERK17ActorDamageSource
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition // _ZN10WitherBoss17handleEntityEventE10ActorEventi
    virtual void causeFallDamage(float); // _ZN10WitherBoss15causeFallDamageEf
    virtual bool canBeAffected(MobEffectInstance const&)const; // _ZNK10WitherBoss13canBeAffectedERK17MobEffectInstance
    virtual bool canBeAffectedByArrow(MobEffectInstance const&)const; // _ZNK10WitherBoss20canBeAffectedByArrowERK17MobEffectInstance
    virtual void die(ActorDamageSource const&); // _ZN10WitherBoss3dieERK17ActorDamageSource
    virtual void _hurt(ActorDamageSource const&, int, bool, bool); // _ZN10WitherBoss5_hurtERK17ActorDamageSourceibb
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &); // _ZN10WitherBoss22readAdditionalSaveDataERK11CompoundTagR14DataLoadHelper
    virtual void addAdditionalSaveData(CompoundTag &); // _ZN10WitherBoss21addAdditionalSaveDataER11CompoundTag
    virtual void hurtEffects(ActorDamageSource const&, int, bool, bool); // _ZN10WitherBoss11hurtEffectsERK17ActorDamageSourceibb
    virtual void aiStep(); // _ZN10WitherBoss6aiStepEv
    virtual void getArmorValue(); // _ZN10WitherBoss13getArmorValueEv
    virtual void newServerAiStep(); // _ZN10WitherBoss15newServerAiStepEv
    void awardSpawnWitherAchievement()const; // _ZNK10WitherBoss27awardSpawnWitherAchievementEv
    bool canDestroy(Block const&); // _ZN10WitherBoss10canDestroyERK5Block
    WitherBoss(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN10WitherBossC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
    void setAerialAttack(bool); // _ZN10WitherBoss15setAerialAttackEb
    void makeInvulnerable(); // _ZN10WitherBoss16makeInvulnerableEv
    void getAerialAttack()const; // _ZNK10WitherBoss15getAerialAttackEv
    void setInvulnerableTicks(int); // _ZN10WitherBoss20setInvulnerableTicksEi
    void getAlternativeTarget(int); // _ZN10WitherBoss20getAlternativeTargetEi
    bool isPowered()const; // _ZNK10WitherBoss9isPoweredEv
    void getHeadPos(int)const; // _ZNK10WitherBoss10getHeadPosEi
    void getInvulnerableTicks()const; // _ZNK10WitherBoss20getInvulnerableTicksEv
    bool canShoot(); // _ZN10WitherBoss8canShootEv
    void setAlternativeTarget(int, ActorUniqueID); // _ZN10WitherBoss20setAlternativeTargetEi13ActorUniqueID
    void _performRangedAttack(int, Actor &); // _ZN10WitherBoss20_performRangedAttackEiR5Actor
    void _performRangedAttack(int, Vec3 const&, bool); // _ZN10WitherBoss20_performRangedAttackEiRK4Vec3b
    void performRangedAttack(Mob &, float); // _ZN10WitherBoss19performRangedAttackER3Mobf
    void changePhase(); // _ZN10WitherBoss11changePhaseEv
    void getHeadRot(int); // _ZN10WitherBoss10getHeadRotEi
    bool wantsToMove(); // _ZN10WitherBoss11wantsToMoveEv
    void setWantsToMove(bool); // _ZN10WitherBoss14setWantsToMoveEb
    void getPhase(); // _ZN10WitherBoss8getPhaseEv
    bool canSummonSkeleton(); // _ZN10WitherBoss17canSummonSkeletonEv
    void addSkeleton(); // _ZN10WitherBoss11addSkeletonEv
    void removeSkeleton(); // _ZN10WitherBoss14removeSkeletonEv
    void getOverlayAlpha(); // _ZN10WitherBoss15getOverlayAlphaEv
    void getSwellAmount(float)const; // _ZNK10WitherBoss14getSwellAmountEf
    void setIsPathing(bool); // _ZN10WitherBoss12setIsPathingEb
    void getPlayerParty()const; // _ZNK10WitherBoss14getPlayerPartyEv
    void setShotDelay(int); // _ZN10WitherBoss12setShotDelayEi
};
