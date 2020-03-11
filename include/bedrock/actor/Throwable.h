#pragma once

#include "unmapped/ActorDefinitionIdentifier.h"
#include "../util/Vec2.h"
#include "./Actor.h"
#include "../../unmapped/HitResult.h"
#include "./Mob.h"
#include "../../unmapped/VariantParameterList.h"
#include "../util/Vec3.h"
#include "../../unmapped/DataLoadHelper.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "../nbt/CompoundTag.h"


class Throwable : Actor {

public:
//  virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual ~Throwable();
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
