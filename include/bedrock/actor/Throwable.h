#pragma once

#include "Actor.h"


class Throwable : Actor {

public:
//  virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN9Throwable20initializeComponentsEN5Actor20InitializationMethodERK20VariantParameterList
    ~Throwable(); // _ZN9ThrowableD2Ev
    virtual void lerpTo(Vec3 const&, Vec2 const&, int); // _ZN9Throwable6lerpToERK4Vec3RK4Vec2i
    virtual void lerpMotion(Vec3 const&); // _ZN9Throwable10lerpMotionERK4Vec3
    virtual void normalTick(); // _ZN9Throwable10normalTickEv
    virtual void getShadowHeightOffs(); // _ZN9Throwable19getShadowHeightOffsEv
    virtual void getSourceUniqueID()const; // _ZNK9Throwable17getSourceUniqueIDEv
    virtual bool canMakeStepSound()const; // _ZNK9Throwable16canMakeStepSoundEv
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &); // _ZN9Throwable22readAdditionalSaveDataERK11CompoundTagR14DataLoadHelper
    virtual void addAdditionalSaveData(CompoundTag &); // _ZN9Throwable21addAdditionalSaveDataER11CompoundTag
    virtual void getThrowPower(); // _ZN9Throwable13getThrowPowerEv
    virtual void stopUponGroundCollision()const; // _ZNK9Throwable23stopUponGroundCollisionEv
    virtual void getThrowUpAngleOffset(); // _ZN9Throwable21getThrowUpAngleOffsetEv
    virtual void getGravity(); // _ZN9Throwable10getGravityEv
    virtual void getParticleType(); // _ZN9Throwable15getParticleTypeEv
    virtual void onHit(HitResult const&); // _ZN9Throwable5onHitERK9HitResult
    Throwable(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN9ThrowableC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
    void shoot(Mob &); // _ZN9Throwable5shootER3Mob
    void shoot(Vec3 const&, float, float, Vec3 const&); // _ZN9Throwable5shootERK4Vec3ffS2_
};
