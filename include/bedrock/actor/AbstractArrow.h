#pragma once

#include "../util/Vec2.h"
#include "Player.h"
#include "../../unmapped/VariantParameterList.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "Actor.h"
#include "../util/Vec3.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../nbt/CompoundTag.h"
#include "../../unmapped/DataLoadHelper.h"


class AbstractArrow : Actor {

public:
    virtual void getSourceUniqueID()const;
    virtual void getShadowRadius()const;
    virtual void playerTouch(Player &);
    virtual void _playPickupSound();
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void lerpTo(Vec3 const&, Vec2 const&, int);
    virtual void getShadowHeightOffs();
    virtual void lerpMotion(Vec3 const&);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual bool canChangeDimensions()const;
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void normalTick();
    virtual void shoot(Vec3 const&, float, float, Vec3 const&);
    ~AbstractArrow();
    void _isPlayerOwned()const;
    void getBaseDamage();
    void _canPickup(Player const&)const;
    void setBaseDamage(float);
    AbstractArrow(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void setIsCreative(bool);
    void setIsPlayerOwned(bool);
    void setFavoredSlot(int);
    void _defineEntityData();
};
