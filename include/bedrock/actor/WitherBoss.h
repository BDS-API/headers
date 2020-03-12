#pragma once

#include "../../unmapped/VariantParameterList.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "Actor.h"
#include "../../unmapped/MobEffectInstance.h"
#include "../util/Vec3.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../nbt/CompoundTag.h"
#include "../../unmapped/Block.h"
#include "unmapped/ActorUniqueID.h"
#include "Mob.h"
#include "damagesource/ActorDamageSource.h"
#include "../../unmapped/DataLoadHelper.h"
#include "Monster.h"


class WitherBoss : Monster {

public:
    static long TIME_BEFORE_MOVING;
    static long MAX_HEALTH_CAP_UUID;

    virtual void startRiding(Actor &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void getFiringPos()const;
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual bool canBeAffectedByArrow(MobEffectInstance const&)const;
    virtual bool isInvulnerableTo(ActorDamageSource const&)const;
    virtual void causeFallDamage(float);
//  virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void remove();
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void die(ActorDamageSource const&);
    ~WitherBoss();
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition
    virtual void newServerAiStep();
    virtual bool canBeAffected(MobEffectInstance const&)const;
    virtual void hurtEffects(ActorDamageSource const&, int, bool, bool);
    virtual void getArmorValue();
    virtual void makeStuckInBlock(float);
    virtual void aiStep();
    void performRangedAttack(Mob &, float);
    bool canSummonSkeleton();
    void getHeadRot(int);
    void addSkeleton();
    void setAerialAttack(bool);
    void makeInvulnerable();
    void changePhase();
    void removeSkeleton();
    void setIsPathing(bool);
    void setWantsToMove(bool);
    bool canDestroy(Block const&);
    void setShotDelay(int);
    bool canShoot();
    void getPhase();
    void setInvulnerableTicks(int);
    void getOverlayAlpha();
    void getInvulnerableTicks()const;
    void getSwellAmount(float)const;
    void _performRangedAttack(int, Actor &);
    WitherBoss(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void getPlayerParty()const;
    void setAlternativeTarget(int, ActorUniqueID);
    bool isPowered()const;
    void _performRangedAttack(int, Vec3 const&, bool);
    void awardSpawnWitherAchievement()const;
    void getAerialAttack()const;
    bool wantsToMove();
    void getHeadPos(int)const;
    void getAlternativeTarget(int);
};
