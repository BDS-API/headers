#pragma once

#include "../bedrock/actor/Actor.h"
#include "HitResult.h"
#include "../bedrock/actor/unmapped/ActorUniqueID.h"
#include "../bedrock/util/BlockPos.h"
#include "../bedrock/util/Vec3.h"
#include "../bedrock/nbt/CompoundTag.h"
#include "../bedrock/actor/damagesource/ActorDamageSource.h"
#include "DataLoadHelper.h"


class ProjectileComponent {

public:
    static long DELAY_ON_HIT;

    void getShootSound();
    ~ProjectileComponent();
    void getPendingTargetID()const;
    void shoot(Actor &, Vec3 const&, float, float, Vec3 const&, Actor *);
    void setFrameDelayed();
    void setWaitingToHitGround(bool);
    void setActiveTarget(Actor &, Actor *);
    void hurt(Actor &, ActorDamageSource const&);
    void setShakeTime(int);
    void getKnockbackForce()const;
    void decrementActorHitCount();
    void getCachedHitResult()const;
    void getPotionEffect();
    void incrementOnGroundTime();
    void setPotionEffect(int);
    void getEnchantChanneling()const;
    void setDamagesOwner(bool);
    ProjectileComponent();
    void getFoundApex()const;
    void setEnchantImpaler(int const&);
    void getOnFireTime()const;
    void setHitActor(bool);
    void getWaitingForServer()const;
    void addAdditionalSaveData(CompoundTag &);
    void setOnGroundTime(int);
    void getIgniteOnHit();
    void setReflect(bool);
    void getNoPhysics()const;
    void getActorHitCount()const;
    void handleMovementGravity(Actor &);
    void setCurrentDelay(unsigned int);
    void getEnchantImpaler()const;
    void getDamagesOwner();
    void getHitResult()const;
    void getDamage();
    void setPiercingEnchantLevel(int);
    void setFlightTime(int);
    void getOnGroundTime()const;
    void setHitResult(HitResult);
    void getDelayedFrame();
    void getReflect()const;
    void setHitFace(unsigned char const&);
    void getThrowPower()const;
    void initFromDefinition(Actor &);
    void setLife(int);
    void getStuckToBlockPos()const;
    void getShakeTime()const;
    void setCachedHitResult(HitResult);
    void getGravity();
    void getSplashRange();
    void getFlightTime()const;
    ProjectileComponent(ProjectileComponent const&);
    void setActorHitCount(int);
    void getThrowUpAngleOffset()const;
    void getCatchFire()const;
    void incrementFlightTime();
    void getHitSound();
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void setCollisionPos(Vec3 const&);
    void getAnchor();
    void getWaitingToHitGround()const;
    void getKnockback();
    void setKnockbackForce(float);
    void getUncertaintyMultiplier()const;
    void handleMovementHoming(Actor &);
    void incrementLife();
    void getShooterAngle(Actor &)const;
    void setEnchantPower(int);
    void getHitWater();
    void getOwnerID()const;
    void setShouldBounce(bool);
    void getHitActor()const;
    void getParticleType();
    void setWaitingForServer(bool);
    void setOwnerId(ActorUniqueID);
    void setSplashRange(float);
    void setDamage(float);
    void getCollisionPos()const;
    void shoot(Actor &, Actor &);
    void getIsHoming()const;
//  void _selectNextMoveDirection(Actor &, ProjectileComponent::EAxis); //TODO: incomplete function definition
    void lerpMotion(Actor &, Vec3 const&);
    void setNoPhysics(bool);
    void setWasOnGround(bool);
    void setChanneling();
    void getMultipleHits()const;
    void getCurrentDelay()const;
    void getBlockStuckTo();
    void getShootTarget();
    void setApexPos(Vec3);
    void onHit(Actor &, HitResult const&);
    void getOffset();
    void getEnchantPiercing()const;
    void _isLoyaltyTrident(Actor const&)const;
    void getShouldBounce();
    void setBlockStuckTo(BlockPos const&);
    void getWasOnGround()const;
    void getSemiRandomDiffDamage();
    ProjectileComponent(ProjectileComponent &&);
//  void getUncertainty(Difficulty)const; //TODO: incomplete function definition
    void getIsDangerous();
    void getUncertaintyBase()const;
    void getReflectOnHurt()const;
    void setFoundApex(bool);
    void _handleLightningOnHit(Actor &);
    void getEnchantPower()const;
};
