#pragma once

#include "Actor.h"


class Throwable : Actor {

public:
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void getThrowUpAngleOffset();
    virtual void lerpMotion(Vec3 const&);
    virtual void getParticleType();
//  virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    ~Throwable();
    virtual void normalTick();
    virtual void getSourceUniqueID()const;
    virtual void getThrowPower();
    virtual void stopUponGroundCollision()const;
    virtual bool canMakeStepSound()const;
    virtual void onHit(HitResult const&);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void getShadowHeightOffs();
    virtual void lerpTo(Vec3 const&, Vec2 const&, int);
    virtual void getGravity();
    Throwable(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void shoot(Mob &);
    void shoot(Vec3 const&, float, float, Vec3 const&);
};
