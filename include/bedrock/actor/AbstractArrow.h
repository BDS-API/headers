#pragma once

#include "Actor.h"


class AbstractArrow : Actor {

public:
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN13AbstractArrow15reloadHardcodedEN5Actor20InitializationMethodERK20VariantParameterList
    ~AbstractArrow(); // _ZN13AbstractArrowD2Ev
    virtual void lerpTo(Vec3 const&, Vec2 const&, int); // _ZN13AbstractArrow6lerpToERK4Vec3RK4Vec2i
    virtual void lerpMotion(Vec3 const&); // _ZN13AbstractArrow10lerpMotionERK4Vec3
    virtual void normalTick(); // _ZN13AbstractArrow10normalTickEv
    virtual void getShadowHeightOffs(); // _ZN13AbstractArrow19getShadowHeightOffsEv
    virtual void getShadowRadius()const; // _ZNK13AbstractArrow15getShadowRadiusEv
    virtual void playerTouch(Player &); // _ZN13AbstractArrow11playerTouchER6Player
    virtual void getSourceUniqueID()const; // _ZNK13AbstractArrow17getSourceUniqueIDEv
    virtual bool canChangeDimensions()const; // _ZNK13AbstractArrow19canChangeDimensionsEv
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &); // _ZN13AbstractArrow22readAdditionalSaveDataERK11CompoundTagR14DataLoadHelper
    virtual void addAdditionalSaveData(CompoundTag &); // _ZN13AbstractArrow21addAdditionalSaveDataER11CompoundTag
    virtual void shoot(Vec3 const&, float, float, Vec3 const&); // _ZN13AbstractArrow5shootERK4Vec3ffS2_
    virtual void _playPickupSound(); // _ZN13AbstractArrow16_playPickupSoundEv
    AbstractArrow(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN13AbstractArrowC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
    void _defineEntityData(); // _ZN13AbstractArrow17_defineEntityDataEv
    void _canPickup(Player const&)const; // _ZNK13AbstractArrow10_canPickupERK6Player
    void setBaseDamage(float); // _ZN13AbstractArrow13setBaseDamageEf
    void getBaseDamage(); // _ZN13AbstractArrow13getBaseDamageEv
    void setIsPlayerOwned(bool); // _ZN13AbstractArrow16setIsPlayerOwnedEb
    void setIsCreative(bool); // _ZN13AbstractArrow13setIsCreativeEb
    void setFavoredSlot(int); // _ZN13AbstractArrow14setFavoredSlotEi
    void _isPlayerOwned()const; // _ZNK13AbstractArrow14_isPlayerOwnedEv
};
