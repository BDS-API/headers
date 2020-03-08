#pragma once

#include "../bedrock/actor/damagesource/ActorDamageSource"
#include "../bedrock/actor/Actor"
#include "../bedrock/nbt/CompoundTag"
#include "../bedrock/util/BlockPos"
#include "../bedrock/util/Vec3"
#include "../bedrock/actor/unmapped/ActorUniqueID"


class ProjectileComponent {

public:
    static long DELAY_ON_HIT;


    void getWaitingForServer()const;
    void getCurrentDelay()const;
    void setCurrentDelay(unsigned int);
    void getReflect()const;
    void getCachedHitResult()const;
    void setReflect(bool);
    void setWaitingForServer(bool);
    void getWaitingToHitGround()const;
    void setWaitingToHitGround(bool);
    void getWasOnGround()const;
    void setWasOnGround(bool);
    void getFoundApex()const;
    void setApexPos(Vec3);
    void getPendingTargetID()const;
    void getIsHoming()const;
    void getShakeTime()const;
    void setShakeTime(int);
    void getStuckToBlockPos()const;
    void getCollisionPos()const;
    void setLife(int);
    void setFlightTime(int);
    void setOnGroundTime(int);
    void getHitWater();
    void setHitResult(HitResult);
    void getMultipleHits()const;
    void getHitActor()const;
    void getFlightTime()const;
    void getDamagesOwner();
    void getReflectOnHurt()const;
    void setCachedHitResult(HitResult);
    void setFoundApex(bool);
    void getDelayedFrame();
    void setFrameDelayed();
    ProjectileComponent(ProjectileComponent&&);
    void getOwnerID()const;
    ProjectileComponent(ProjectileComponent const&);
    void getOnFireTime()const;
    void getEnchantPiercing()const;
    void setEnchantPower(int);
    void getEnchantPower()const;
    void getOnGroundTime()const;
    ProjectileComponent(void);
    void initFromDefinition(Actor &);
    void addAdditionalSaveData(CompoundTag &);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void getUncertainty(Difficulty)const;
    void getUncertaintyBase()const;
    void getUncertaintyMultiplier()const;
    void getThrowUpAngleOffset()const;
    void getGravity();
    void getParticleType();
    void getSemiRandomDiffDamage();
    void getIsDangerous();
    void getShootTarget();
    void onHit(Actor &, HitResult const&);
    void _isLoyaltyTrident(Actor const&)const;
    void _handleLightningOnHit(Actor &);
    void hurt(Actor &, ActorDamageSource const&);
    void getPotionEffect();
    void setPotionEffect(int);
    void getKnockback();
    void getKnockbackForce()const;
    void setKnockbackForce(float);
    void setChanneling();
    void getEnchantChanneling()const;
    void setEnchantImpaler(int const&);
    void getEnchantImpaler()const;
    void getIgniteOnHit();
    void getCatchFire()const;
    void getAnchor();
    void getOffset();
    void getShootSound();
    void getHitSound();
    void getBlockStuckTo();
    void setBlockStuckTo(BlockPos const&);
    void incrementLife();
    void incrementFlightTime();
    void setShouldBounce(bool);
    void getShouldBounce();
    void setNoPhysics(bool);
    void getNoPhysics()const;
    void setOwnerId(ActorUniqueID);
    void setSplashRange(float);
    void getShooterAngle(Actor &)const;
    void shoot(Actor &, Actor &);
    void shoot(Actor &, Vec3 const&, float, float, Vec3 const&, Actor*);
    void getThrowPower()const;
    void _selectNextMoveDirection(Actor &, ProjectileComponent::EAxis);
    void setActiveTarget(Actor &, Actor*);
    void handleMovementGravity(Actor &);
    void handleMovementHoming(Actor &);
    void lerpMotion(Actor &, Vec3 const&);
    void incrementOnGroundTime();
    void setDamagesOwner(bool);
    void getHitResult()const;
    void setCollisionPos(Vec3 const&);
    void setActorHitCount(int);
    void setHitActor(bool);
    void decrementActorHitCount();
    void getActorHitCount()const;
    void setHitFace(unsigned char const&);
    void getSplashRange();
    void setDamage(float);
    void getDamage();
    void setPiercingEnchantLevel(int);
};
