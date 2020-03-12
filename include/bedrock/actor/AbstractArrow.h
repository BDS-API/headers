#pragma once

#include "Actor.h"


class AbstractArrow : Actor {

public:
    virtual void getShadowRadius()const;
    virtual void getShadowHeightOffs();
    virtual bool canChangeDimensions()const;
    virtual void lerpMotion(Vec3 const&);
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void getSourceUniqueID()const;
    ~AbstractArrow();
    virtual void playerTouch(Player &);
    virtual void normalTick();
    virtual void lerpTo(Vec3 const&, Vec2 const&, int);
    virtual void _playPickupSound();
    virtual void shoot(Vec3 const&, float, float, Vec3 const&);
    AbstractArrow(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void setIsPlayerOwned(bool);
    void setFavoredSlot(int);
    void _canPickup(Player const&)const;
    void _isPlayerOwned()const;
    void _defineEntityData();
    void setIsCreative(bool);
    void setBaseDamage(float);
    void getBaseDamage();
};
