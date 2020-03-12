#pragma once

#include "Actor.h"


class Fireball : Actor {

public:
    virtual void normalTick();
    virtual void getShadowHeightOffs();
    virtual void shouldBurn();
    virtual void getBrightness(float)const;
    ~Fireball();
    virtual void getInertia();
    virtual void getSourceUniqueID()const;
    virtual void getTrailParticle();
    virtual void onHit(HitResult const&);
    virtual void getPickRadius();
    virtual bool isPickable();
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual bool canMakeStepSound()const;
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void lerpTo(Vec3 const&, Vec2 const&, int);
    void _getPower()const;
    void _defineEntityData();
    Fireball(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void _setPower(Vec3 const&);
};
