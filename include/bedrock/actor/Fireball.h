#pragma once

#include "../util/Vec2.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "../../unmapped/HitResult.h"
#include "Actor.h"
#include "../util/Vec3.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../nbt/CompoundTag.h"
#include "../../unmapped/DataLoadHelper.h"


class Fireball : Actor {

public:
    virtual void addAdditionalSaveData(CompoundTag &);
    ~Fireball();
    virtual void shouldBurn();
    virtual void getPickRadius();
    virtual bool isPickable();
    virtual void onHit(HitResult const&);
    virtual void getBrightness(float)const;
    virtual void getInertia();
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void getShadowHeightOffs();
    virtual void getTrailParticle();
    virtual bool canMakeStepSound()const;
    virtual void normalTick();
    virtual void getSourceUniqueID()const;
    virtual void lerpTo(Vec3 const&, Vec2 const&, int);
    void _getPower()const;
    void _setPower(Vec3 const&);
    void _defineEntityData();
    Fireball(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
