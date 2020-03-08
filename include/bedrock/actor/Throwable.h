#pragma once

#include "../../unmapped/VariantParameterList"
#include "unmapped/ActorDefinitionGroup"
#include "../../unmapped/HitResult"
#include "../../unmapped/DataLoadHelper"
#include "../util/Vec2"
#include "../util/Vec3"
#include "unmapped/ActorDefinitionIdentifier"
#include "../nbt/CompoundTag"


class Throwable : Actor {

public:
    virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&);
    Throwable::~Throwable()
    virtual void lerpTo(Vec3 const&, Vec2 const&, int);
    virtual void lerpMotion(Vec3 const&);
    virtual void normalTick();
    virtual void getShadowHeightOffs();
    virtual void getSourceUniqueID()const;
    virtual bool canMakeStepSound()const;
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void getThrowPower();
    virtual void stopUponGroundCollision()const;
    virtual void getThrowUpAngleOffset();
    virtual void getGravity();
    virtual void getParticleType();
    virtual void onHit(HitResult const&);

    Throwable(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void shoot(Mob &);
    void shoot(Vec3 const&, float, float, Vec3 const&);
};
