#pragma once

#include "unmapped/ActorDefinitionGroup"
#include "../../unmapped/HitResult"
#include "../../unmapped/DataLoadHelper"
#include "../util/Vec2"
#include "../util/Vec3"
#include "unmapped/ActorDefinitionIdentifier"
#include "../nbt/CompoundTag"


class Fireball : Actor {

public:
    Fireball::~Fireball()
    virtual void lerpTo(Vec3 const&, Vec2 const&, int);
    virtual void normalTick();
    virtual void getShadowHeightOffs();
    virtual void getBrightness(float)const;
    virtual bool isPickable();
    virtual void getPickRadius();
    virtual void getSourceUniqueID()const;
    virtual bool canMakeStepSound()const;
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void getInertia();
    virtual void onHit(HitResult const&);
    virtual void getTrailParticle();
    virtual void shouldBurn();

    Fireball(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void _defineEntityData();
    void _setPower(Vec3 const&);
    void _getPower()const;
};
