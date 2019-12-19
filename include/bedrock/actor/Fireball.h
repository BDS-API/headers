#pragma once

class Fireball : Actor {

public:
    virtual Fireball::~Fireball();
    virtual void lerpTo(Vec3 const&, Vec2 const&, int);
    virtual void normalTick(void);
    virtual void getShadowHeightOffs(void);
    virtual void getBrightness(float)const;
    virtual bool isPickable(void);
    virtual void getPickRadius(void);
    virtual void getSourceUniqueID(void)const;
    virtual bool canMakeStepSound(void)const;
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void getInertia(void);
    virtual void onHit(HitResult const&);
    virtual void getTrailParticle(void);
    virtual void shouldBurn(void);

    Fireball(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void _defineEntityData(void);
    void _setPower(Vec3 const&);
    void _getPower(void)const;
};
