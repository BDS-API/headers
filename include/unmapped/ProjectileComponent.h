#pragma once

#include "../bedrock/util/Vec3.h"
#include "../bedrock/actor/unmapped/ActorUniqueID.h"
#include "HitResult.h"


class ProjectileComponent {

public:
    static long DELAY_ON_HIT;

    void getWaitingForServer()const; // _ZNK19ProjectileComponent19getWaitingForServerEv
    void getCurrentDelay()const; // _ZNK19ProjectileComponent15getCurrentDelayEv
    void setCurrentDelay(unsigned int); // _ZN19ProjectileComponent15setCurrentDelayEj
    void getReflect()const; // _ZNK19ProjectileComponent10getReflectEv
    void getCachedHitResult()const; // _ZNK19ProjectileComponent18getCachedHitResultEv
    void setReflect(bool); // _ZN19ProjectileComponent10setReflectEb
    void setWaitingForServer(bool); // _ZN19ProjectileComponent19setWaitingForServerEb
    void getWaitingToHitGround()const; // _ZNK19ProjectileComponent21getWaitingToHitGroundEv
    void setWaitingToHitGround(bool); // _ZN19ProjectileComponent21setWaitingToHitGroundEb
    void getWasOnGround()const; // _ZNK19ProjectileComponent14getWasOnGroundEv
    void setWasOnGround(bool); // _ZN19ProjectileComponent14setWasOnGroundEb
    void getFoundApex()const; // _ZNK19ProjectileComponent12getFoundApexEv
    void setApexPos(Vec3); // _ZN19ProjectileComponent10setApexPosE4Vec3
    void getPendingTargetID()const; // _ZNK19ProjectileComponent18getPendingTargetIDEv
    void getIsHoming()const; // _ZNK19ProjectileComponent11getIsHomingEv
    void getShakeTime()const; // _ZNK19ProjectileComponent12getShakeTimeEv
    void setShakeTime(int); // _ZN19ProjectileComponent12setShakeTimeEi
    void getStuckToBlockPos()const; // _ZNK19ProjectileComponent18getStuckToBlockPosEv
    void getCollisionPos()const; // _ZNK19ProjectileComponent15getCollisionPosEv
    void setLife(int); // _ZN19ProjectileComponent7setLifeEi
    void setFlightTime(int); // _ZN19ProjectileComponent13setFlightTimeEi
    void setOnGroundTime(int); // _ZN19ProjectileComponent15setOnGroundTimeEi
    void getHitWater(); // _ZN19ProjectileComponent11getHitWaterEv
    void setHitResult(HitResult); // _ZN19ProjectileComponent12setHitResultE9HitResult
    void getMultipleHits()const; // _ZNK19ProjectileComponent15getMultipleHitsEv
    void getHitActor()const; // _ZNK19ProjectileComponent11getHitActorEv
    void getFlightTime()const; // _ZNK19ProjectileComponent13getFlightTimeEv
    void getDamagesOwner(); // _ZN19ProjectileComponent15getDamagesOwnerEv
    void getReflectOnHurt()const; // _ZNK19ProjectileComponent16getReflectOnHurtEv
    void setCachedHitResult(HitResult); // _ZN19ProjectileComponent18setCachedHitResultE9HitResult
    void setFoundApex(bool); // _ZN19ProjectileComponent12setFoundApexEb
    void getDelayedFrame(); // _ZN19ProjectileComponent15getDelayedFrameEv
    void setFrameDelayed(); // _ZN19ProjectileComponent15setFrameDelayedEv
    ~ProjectileComponent(); // _ZN19ProjectileComponentD2Ev
    ProjectileComponent(ProjectileComponent &&); // _ZN19ProjectileComponentC2EOS_
    void getOwnerID()const; // _ZNK19ProjectileComponent10getOwnerIDEv
    ProjectileComponent(ProjectileComponent const&); // _ZN19ProjectileComponentC2ERKS_
    void getOnFireTime()const; // _ZNK19ProjectileComponent13getOnFireTimeEv
    void getEnchantPiercing()const; // _ZNK19ProjectileComponent18getEnchantPiercingEv
    void setEnchantPower(int); // _ZN19ProjectileComponent15setEnchantPowerEi
    void getEnchantPower()const; // _ZNK19ProjectileComponent15getEnchantPowerEv
    void getOnGroundTime()const; // _ZNK19ProjectileComponent15getOnGroundTimeEv
    ProjectileComponent(); // _ZN19ProjectileComponentC2Ev
    void initFromDefinition(Actor &); // _ZN19ProjectileComponent18initFromDefinitionER5Actor
    void addAdditionalSaveData(CompoundTag &); // _ZN19ProjectileComponent21addAdditionalSaveDataER11CompoundTag
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &); // _ZN19ProjectileComponent22readAdditionalSaveDataER5ActorRK11CompoundTagR14DataLoadHelper
//  void getUncertainty(Difficulty)const; //TODO: incomplete function definition // _ZNK19ProjectileComponent14getUncertaintyE10Difficulty
    void getUncertaintyBase()const; // _ZNK19ProjectileComponent18getUncertaintyBaseEv
    void getUncertaintyMultiplier()const; // _ZNK19ProjectileComponent24getUncertaintyMultiplierEv
    void getThrowUpAngleOffset()const; // _ZNK19ProjectileComponent21getThrowUpAngleOffsetEv
    void getGravity(); // _ZN19ProjectileComponent10getGravityEv
    void getParticleType(); // _ZN19ProjectileComponent15getParticleTypeEv
    void getSemiRandomDiffDamage(); // _ZN19ProjectileComponent23getSemiRandomDiffDamageEv
    void getIsDangerous(); // _ZN19ProjectileComponent14getIsDangerousEv
    void getShootTarget(); // _ZN19ProjectileComponent14getShootTargetEv
    void onHit(Actor &, HitResult const&); // _ZN19ProjectileComponent5onHitER5ActorRK9HitResult
    void _isLoyaltyTrident(Actor const&)const; // _ZNK19ProjectileComponent17_isLoyaltyTridentERK5Actor
    void _handleLightningOnHit(Actor &); // _ZN19ProjectileComponent21_handleLightningOnHitER5Actor
    void hurt(Actor &, ActorDamageSource const&); // _ZN19ProjectileComponent4hurtER5ActorRK17ActorDamageSource
    void getPotionEffect(); // _ZN19ProjectileComponent15getPotionEffectEv
    void setPotionEffect(int); // _ZN19ProjectileComponent15setPotionEffectEi
    void getKnockback(); // _ZN19ProjectileComponent12getKnockbackEv
    void getKnockbackForce()const; // _ZNK19ProjectileComponent17getKnockbackForceEv
    void setKnockbackForce(float); // _ZN19ProjectileComponent17setKnockbackForceEf
    void setChanneling(); // _ZN19ProjectileComponent13setChannelingEv
    void getEnchantChanneling()const; // _ZNK19ProjectileComponent20getEnchantChannelingEv
    void setEnchantImpaler(int const&); // _ZN19ProjectileComponent17setEnchantImpalerERKi
    void getEnchantImpaler()const; // _ZNK19ProjectileComponent17getEnchantImpalerEv
    void getIgniteOnHit(); // _ZN19ProjectileComponent14getIgniteOnHitEv
    void getCatchFire()const; // _ZNK19ProjectileComponent12getCatchFireEv
    void getAnchor(); // _ZN19ProjectileComponent9getAnchorEv
    void getOffset(); // _ZN19ProjectileComponent9getOffsetEv
    void getShootSound(); // _ZN19ProjectileComponent13getShootSoundEv
    void getHitSound(); // _ZN19ProjectileComponent11getHitSoundEv
    void getBlockStuckTo(); // _ZN19ProjectileComponent15getBlockStuckToEv
    void setBlockStuckTo(BlockPos const&); // _ZN19ProjectileComponent15setBlockStuckToERK8BlockPos
    void incrementLife(); // _ZN19ProjectileComponent13incrementLifeEv
    void incrementFlightTime(); // _ZN19ProjectileComponent19incrementFlightTimeEv
    void setShouldBounce(bool); // _ZN19ProjectileComponent15setShouldBounceEb
    void getShouldBounce(); // _ZN19ProjectileComponent15getShouldBounceEv
    void setNoPhysics(bool); // _ZN19ProjectileComponent12setNoPhysicsEb
    void getNoPhysics()const; // _ZNK19ProjectileComponent12getNoPhysicsEv
    void setOwnerId(ActorUniqueID); // _ZN19ProjectileComponent10setOwnerIdE13ActorUniqueID
    void setSplashRange(float); // _ZN19ProjectileComponent14setSplashRangeEf
    void getShooterAngle(Actor &)const; // _ZNK19ProjectileComponent15getShooterAngleER5Actor
    void shoot(Actor &, Actor &); // _ZN19ProjectileComponent5shootER5ActorS1_
    void shoot(Actor &, Vec3 const&, float, float, Vec3 const&, Actor *); // _ZN19ProjectileComponent5shootER5ActorRK4Vec3ffS4_PS0_
    void getThrowPower()const; // _ZNK19ProjectileComponent13getThrowPowerEv
//  void _selectNextMoveDirection(Actor &, ProjectileComponent::EAxis); //TODO: incomplete function definition // _ZN19ProjectileComponent24_selectNextMoveDirectionER5ActorNS_5EAxisE
    void setActiveTarget(Actor &, Actor *); // _ZN19ProjectileComponent15setActiveTargetER5ActorPS0_
    void handleMovementGravity(Actor &); // _ZN19ProjectileComponent21handleMovementGravityER5Actor
    void handleMovementHoming(Actor &); // _ZN19ProjectileComponent20handleMovementHomingER5Actor
    void lerpMotion(Actor &, Vec3 const&); // _ZN19ProjectileComponent10lerpMotionER5ActorRK4Vec3
    void incrementOnGroundTime(); // _ZN19ProjectileComponent21incrementOnGroundTimeEv
    void setDamagesOwner(bool); // _ZN19ProjectileComponent15setDamagesOwnerEb
    void getHitResult()const; // _ZNK19ProjectileComponent12getHitResultEv
    void setCollisionPos(Vec3 const&); // _ZN19ProjectileComponent15setCollisionPosERK4Vec3
    void setActorHitCount(int); // _ZN19ProjectileComponent16setActorHitCountEi
    void setHitActor(bool); // _ZN19ProjectileComponent11setHitActorEb
    void decrementActorHitCount(); // _ZN19ProjectileComponent22decrementActorHitCountEv
    void getActorHitCount()const; // _ZNK19ProjectileComponent16getActorHitCountEv
    void setHitFace(unsigned char const&); // _ZN19ProjectileComponent10setHitFaceERKh
    void getSplashRange(); // _ZN19ProjectileComponent14getSplashRangeEv
    void setDamage(float); // _ZN19ProjectileComponent9setDamageEf
    void getDamage(); // _ZN19ProjectileComponent9getDamageEv
    void setPiercingEnchantLevel(int); // _ZN19ProjectileComponent23setPiercingEnchantLevelEi
};
