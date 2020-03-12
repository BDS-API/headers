#pragma once

#include "../util/Vec2.h"
#include "../../unmapped/VariantParameterList.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "../../unmapped/HitResult.h"
#include "Actor.h"
#include "../util/Vec3.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../nbt/CompoundTag.h"
#include "Mob.h"
#include "../../unmapped/DataLoadHelper.h"


class Throwable : Actor {

public:
    virtual bool canMakeStepSound()const;
    virtual void normalTick();
    virtual void onHit(HitResult const&);
    virtual void getShadowHeightOffs();
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    ~Throwable();
    virtual void getThrowPower();
    virtual void lerpTo(Vec3 const&, Vec2 const&, int);
    virtual void getThrowUpAngleOffset();
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void getGravity();
    virtual void stopUponGroundCollision()const;
    virtual void getSourceUniqueID()const;
//  virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void lerpMotion(Vec3 const&);
    virtual void getParticleType();
    Throwable(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void shoot(Vec3 const&, float, float, Vec3 const&);
    void shoot(Mob &);
};
