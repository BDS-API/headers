#pragma once

#include "unmapped/ActorDefinitionIdentifier.h"
#include "../util/Vec2.h"
#include "./Actor.h"
#include "../../unmapped/VariantParameterList.h"
#include "../util/Vec3.h"
#include "../../unmapped/DataLoadHelper.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "../nbt/CompoundTag.h"
#include "./Player.h"


class AbstractArrow : Actor {

public:
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual ~AbstractArrow();
    virtual void lerpTo(Vec3 const&, Vec2 const&, int);
    virtual void lerpMotion(Vec3 const&);
    virtual void normalTick();
    virtual void getShadowHeightOffs();
    virtual void getShadowRadius()const;
    virtual void playerTouch(Player &);
    virtual void getSourceUniqueID()const;
    virtual bool canChangeDimensions()const;
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void shoot(Vec3 const&, float, float, Vec3 const&);
    virtual void _playPickupSound();

    AbstractArrow(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void _defineEntityData();
    void _canPickup(Player const&)const;
    void setBaseDamage(float);
    void getBaseDamage();
    void setIsPlayerOwned(bool);
    void setIsCreative(bool);
    void setFavoredSlot(int);
    void _isPlayerOwned()const;
};
