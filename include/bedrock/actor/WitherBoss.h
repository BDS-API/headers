#pragma once

#include "Monster.h"
#include "unmapped/ActorUniqueID.h"


class WitherBoss : Monster {

public:
    static long TIME_BEFORE_MOVING;
    static long MAX_HEALTH_CAP_UUID;

    virtual void die(ActorDamageSource const&);
    virtual void getFiringPos()const;
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    ~WitherBoss();
    virtual void hurtEffects(ActorDamageSource const&, int, bool, bool);
    virtual void getArmorValue();
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void startRiding(Actor &);
    virtual void makeStuckInBlock(float);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition
    virtual bool isInvulnerableTo(ActorDamageSource const&)const;
    virtual void newServerAiStep();
    virtual void aiStep();
//  virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void causeFallDamage(float);
    virtual bool canBeAffected(MobEffectInstance const&)const;
    virtual bool canBeAffectedByArrow(MobEffectInstance const&)const;
    virtual void remove();
    bool canSummonSkeleton();
    void setIsPathing(bool);
    bool canShoot();
    void setAlternativeTarget(int, ActorUniqueID);
    void removeSkeleton();
    bool wantsToMove();
    void getInvulnerableTicks()const;
    void getSwellAmount(float)const;
    void addSkeleton();
    void awardSpawnWitherAchievement()const;
    void getHeadPos(int)const;
    void changePhase();
    void _performRangedAttack(int, Actor &);
    void getPlayerParty()const;
    void getOverlayAlpha();
    void setShotDelay(int);
    void setWantsToMove(bool);
    void getHeadRot(int);
    void getAerialAttack()const;
    void performRangedAttack(Mob &, float);
    void makeInvulnerable();
    void setInvulnerableTicks(int);
    WitherBoss(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void setAerialAttack(bool);
    bool isPowered()const;
    void getPhase();
    void _performRangedAttack(int, Vec3 const&, bool);
    bool canDestroy(Block const&);
    void getAlternativeTarget(int);
};
