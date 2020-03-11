#pragma once

#include "../../unmapped/MobEffectInstance.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "./Actor.h"
#include "unmapped/ActorUniqueID.h"
#include "./Mob.h"
#include "../../unmapped/VariantParameterList.h"
#include "damagesource/ActorDamageSource.h"
#include "../util/Vec3.h"
#include "./Monster.h"
#include "../../unmapped/DataLoadHelper.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "../nbt/CompoundTag.h"
#include "../../unmapped/Block.h"


class WitherBoss : Monster {

public:
    static long TIME_BEFORE_MOVING;
    static long MAX_HEALTH_CAP_UUID;

//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
//  virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual ~WitherBoss();
    virtual void remove();
    virtual void getFiringPos()const;
    virtual void startRiding(Actor &);
    virtual void makeStuckInBlock(float);
    virtual bool isInvulnerableTo(ActorDamageSource const&)const;
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition
    virtual void causeFallDamage(float);
    virtual bool canBeAffected(MobEffectInstance const&)const;
    virtual bool canBeAffectedByArrow(MobEffectInstance const&)const;
    virtual void die(ActorDamageSource const&);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void hurtEffects(ActorDamageSource const&, int, bool, bool);
    virtual void aiStep();
    virtual void getArmorValue();
    virtual void newServerAiStep();

    void awardSpawnWitherAchievement()const;
    bool canDestroy(Block const&);
    WitherBoss(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void setAerialAttack(bool);
    void makeInvulnerable();
    void getAerialAttack()const;
    void setInvulnerableTicks(int);
    void getAlternativeTarget(int);
    bool isPowered()const;
    void getHeadPos(int)const;
    void getInvulnerableTicks()const;
    bool canShoot();
    void setAlternativeTarget(int, ActorUniqueID);
    void _performRangedAttack(int, Actor &);
    void _performRangedAttack(int, Vec3 const&, bool);
    void performRangedAttack(Mob &, float);
    void changePhase();
    void getHeadRot(int);
    bool wantsToMove();
    void setWantsToMove(bool);
    void getPhase();
    bool canSummonSkeleton();
    void addSkeleton();
    void removeSkeleton();
    void getOverlayAlpha();
    void getSwellAmount(float)const;
    void setIsPathing(bool);
    void getPlayerParty()const;
    void setShotDelay(int);
};
