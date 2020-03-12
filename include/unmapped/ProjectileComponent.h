#pragma once

#include "../bedrock/actor/unmapped/ActorUniqueID.h"
#include "HitResult.h"
#include "../bedrock/util/Vec3.h"


class ProjectileComponent {

public:
    static long DELAY_ON_HIT;

    void getHitActor()const;
    void incrementFlightTime();
    void getOffset();
    void getShootSound();
    void getSemiRandomDiffDamage();
    void getShakeTime()const;
    void setShakeTime(int);
    void setHitResult(HitResult);
    void setFoundApex(bool);
    void addAdditionalSaveData(CompoundTag &);
    void setReflect(bool);
    void getHitWater();
    void getKnockback();
    void setActiveTarget(Actor &, Actor *);
    void getOnFireTime()const;
    void setActorHitCount(int);
    void getHitSound();
    void getFlightTime()const;
    void getMultipleHits()const;
    void handleMovementHoming(Actor &);
    void getCachedHitResult()const;
    void getPendingTargetID()const;
    void hurt(Actor &, ActorDamageSource const&);
    void decrementActorHitCount();
    void _isLoyaltyTrident(Actor const&)const;
    void getStuckToBlockPos()const;
    void getNoPhysics()const;
    void setLife(int);
    void setFrameDelayed();
    void incrementOnGroundTime();
    ProjectileComponent(ProjectileComponent &&);
    ~ProjectileComponent();
    void setEnchantPower(int);
    void setSplashRange(float);
    void getFoundApex()const;
    void incrementLife();
    void getCurrentDelay()const;
    void getPotionEffect();
    void getDamagesOwner();
    void getUncertaintyMultiplier()const;
    void getWaitingToHitGround()const;
    void setPotionEffect(int);
    void setBlockStuckTo(BlockPos const&);
    void setNoPhysics(bool);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void initFromDefinition(Actor &);
    void getReflect()const;
    void getShootTarget();
    void setOnGroundTime(int);
    void setApexPos(Vec3);
    void getShooterAngle(Actor &)const;
    void setCachedHitResult(HitResult);
    void getSplashRange();
    void getParticleType();
    void setHitFace(unsigned char const&);
    void getEnchantChanneling()const;
    void getDelayedFrame();
    void getEnchantPiercing()const;
    ProjectileComponent(ProjectileComponent const&);
    void getDamage();
    void getOwnerID()const;
    void getThrowUpAngleOffset()const;
    void getIgniteOnHit();
    void handleMovementGravity(Actor &);
    void getOnGroundTime()const;
    void getCatchFire()const;
    void setShouldBounce(bool);
    void getWaitingForServer()const;
    void getIsDangerous();
    void getActorHitCount()const;
    void getCollisionPos()const;
    void getUncertaintyBase()const;
    void setPiercingEnchantLevel(int);
    void setKnockbackForce(float);
    void setDamage(float);
    void onHit(Actor &, HitResult const&);
    void getAnchor();
    void setHitActor(bool);
    void _handleLightningOnHit(Actor &);
    void getIsHoming()const;
    void setWasOnGround(bool);
    void setEnchantImpaler(int const&);
//  void getUncertainty(Difficulty)const; //TODO: incomplete function definition
    void getShouldBounce();
    void getBlockStuckTo();
    void setFlightTime(int);
//  void _selectNextMoveDirection(Actor &, ProjectileComponent::EAxis); //TODO: incomplete function definition
    void setChanneling();
    ProjectileComponent();
    void setWaitingForServer(bool);
    void setCollisionPos(Vec3 const&);
    void lerpMotion(Actor &, Vec3 const&);
    void getGravity();
    void getWasOnGround()const;
    void getKnockbackForce()const;
    void shoot(Actor &, Vec3 const&, float, float, Vec3 const&, Actor *);
    void setCurrentDelay(unsigned int);
    void getEnchantPower()const;
    void getThrowPower()const;
    void setDamagesOwner(bool);
    void getReflectOnHurt()const;
    void shoot(Actor &, Actor &);
    void setWaitingToHitGround(bool);
    void getEnchantImpaler()const;
    void setOwnerId(ActorUniqueID);
    void getHitResult()const;
};
