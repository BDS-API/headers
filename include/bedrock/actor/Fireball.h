#pragma once

#include "Actor.h"


class Fireball : Actor {

public:
    ~Fireball(); // _ZN8FireballD2Ev
    virtual void lerpTo(Vec3 const&, Vec2 const&, int); // _ZN8Fireball6lerpToERK4Vec3RK4Vec2i
    virtual void normalTick(); // _ZN8Fireball10normalTickEv
    virtual void getShadowHeightOffs(); // _ZN8Fireball19getShadowHeightOffsEv
    virtual void getBrightness(float)const; // _ZNK8Fireball13getBrightnessEf
    virtual bool isPickable(); // _ZN8Fireball10isPickableEv
    virtual void getPickRadius(); // _ZN8Fireball13getPickRadiusEv
    virtual void getSourceUniqueID()const; // _ZNK8Fireball17getSourceUniqueIDEv
    virtual bool canMakeStepSound()const; // _ZNK8Fireball16canMakeStepSoundEv
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &); // _ZN8Fireball22readAdditionalSaveDataERK11CompoundTagR14DataLoadHelper
    virtual void addAdditionalSaveData(CompoundTag &); // _ZN8Fireball21addAdditionalSaveDataER11CompoundTag
    virtual void getInertia(); // _ZN8Fireball10getInertiaEv
    virtual void onHit(HitResult const&); // _ZN8Fireball5onHitERK9HitResult
    virtual void getTrailParticle(); // _ZN8Fireball16getTrailParticleEv
    virtual void shouldBurn(); // _ZN8Fireball10shouldBurnEv
    Fireball(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN8FireballC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
    void _defineEntityData(); // _ZN8Fireball17_defineEntityDataEv
    void _setPower(Vec3 const&); // _ZN8Fireball9_setPowerERK4Vec3
    void _getPower()const; // _ZNK8Fireball9_getPowerEv
};
