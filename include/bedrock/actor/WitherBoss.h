#pragma once

#include "../../unmapped/Block"
#include "../../unmapped/ActorUniqueID"
#include "../../unmapped/MobEffectInstance"
#include "../../unmapped/ActorDefinitionGroup"
#include "../../unmapped/VariantParameterList"
#include "../nbt/CompoundTag"
#include "damagesource/ActorDamageSource"
#include "../../unmapped/Vec3"


class WitherBoss : Monster {

public:
    static long TIME_BEFORE_MOVING;
    static long MAX_HEALTH_CAP_UUID;

    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&);
    virtual WitherBoss::~WitherBoss();
    virtual void remove(void);
    virtual void getFiringPos(void)const;
    virtual void startRiding(Actor &);
    virtual void makeStuckInBlock(float);
    virtual bool isInvulnerableTo(ActorDamageSource const&)const;
    virtual void handleEntityEvent(ActorEvent, int);
    virtual void causeFallDamage(float);
    virtual bool canBeAffected(MobEffectInstance const&)const;
    virtual bool canBeAffectedByArrow(MobEffectInstance const&)const;
    virtual void die(ActorDamageSource const&);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void hurtEffects(ActorDamageSource const&, int, bool, bool);
    virtual void aiStep(void);
    virtual void getArmorValue(void);
    virtual void newServerAiStep(void);

    void awardSpawnWitherAchievement(void)const;
    bool canDestroy(Block const&);
    WitherBoss(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void setAerialAttack(bool);
    void makeInvulnerable(void);
    void getAerialAttack(void)const;
    void setInvulnerableTicks(int);
    void getAlternativeTarget(int);
    bool isPowered(void)const;
    void getHeadPos(int)const;
    void getInvulnerableTicks(void)const;
    bool canShoot(void);
    void setAlternativeTarget(int, ActorUniqueID);
    void _performRangedAttack(int, Actor &);
    void _performRangedAttack(int, Vec3 const&, bool);
    void performRangedAttack(Mob &, float);
    void changePhase(void);
    void getHeadRot(int);
    bool wantsToMove(void);
    void setWantsToMove(bool);
    void getPhase(void);
    bool canSummonSkeleton(void);
    void addSkeleton(void);
    void removeSkeleton(void);
    void getOverlayAlpha(void);
    void getSwellAmount(float)const;
    void setIsPathing(bool);
    void getPlayerParty(void)const;
    void setShotDelay(int);
};
