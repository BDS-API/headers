#pragma once

#include "../../unmapped/ActorDefinitionGroup"
#include "../../unmapped/HitResult"
#include "../../unmapped/VariantParameterList"
#include "../nbt/CompoundTag"
#include "../../unmapped/Vec3"


class Throwable : Actor {

public:
    virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&);
    virtual Throwable::~Throwable();
    virtual void lerpTo(Vec3 const&, Vec2 const&, int);
    virtual void lerpMotion(Vec3 const&);
    virtual void normalTick(void);
    virtual void getShadowHeightOffs(void);
    virtual void getSourceUniqueID(void)const;
    virtual bool canMakeStepSound(void)const;
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void getThrowPower(void);
    virtual void stopUponGroundCollision(void)const;
    virtual void getThrowUpAngleOffset(void);
    virtual void getGravity(void);
    virtual void getParticleType(void);
    virtual void onHit(HitResult const&);

    Throwable(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void shoot(Mob &);
    void shoot(Vec3 const&, float, float, Vec3 const&);
};
