#pragma once

#include "Actor.h"


class ItemActor : Actor {

public:
    static long LIFETIME;

//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN9ItemActor15reloadHardcodedEN5Actor20InitializationMethodERK20VariantParameterList
    ~ItemActor(); // _ZN9ItemActorD2Ev
    virtual void getAddPacket(); // _ZN9ItemActor12getAddPacketEv
    virtual void normalTick(); // _ZN9ItemActor10normalTickEv
    virtual void playerTouch(Player &); // _ZN9ItemActor11playerTouchER6Player
    virtual bool isInvulnerableTo(ActorDamageSource const&)const; // _ZNK9ItemActor16isInvulnerableToERK17ActorDamageSource
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition // _ZN9ItemActor17handleEntityEventE10ActorEventi
    virtual void getSourceUniqueID()const; // _ZNK9ItemActor17getSourceUniqueIDEv
    virtual void getHandleWaterAABB()const; // _ZNK9ItemActor18getHandleWaterAABBEv
    virtual bool canSynchronizeNewEntity()const; // _ZNK9ItemActor23canSynchronizeNewEntityEv
    virtual bool canMakeStepSound()const; // _ZNK9ItemActor16canMakeStepSoundEv
    virtual void _hurt(ActorDamageSource const&, int, bool, bool); // _ZN9ItemActor5_hurtERK17ActorDamageSourceibb
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &); // _ZN9ItemActor22readAdditionalSaveDataERK11CompoundTagR14DataLoadHelper
    virtual void addAdditionalSaveData(CompoundTag &); // _ZN9ItemActor21addAdditionalSaveDataER11CompoundTag
    void getItemStack(); // _ZN9ItemActor12getItemStackEv
    bool isFromFishing()const; // _ZNK9ItemActor13isFromFishingEv
    void getItemStack()const; // _ZNK9ItemActor12getItemStackEv
    void setItemStack(ItemStack const&); // _ZN9ItemActor12setItemStackERK9ItemStack
    void setDefaultPickUpDelay(); // _ZN9ItemActor21setDefaultPickUpDelayEv
    void setIsFromFishing(bool); // _ZN9ItemActor16setIsFromFishingEb
    bool hasPickUpDelay(); // _ZN9ItemActor14hasPickUpDelayEv
    void _validateItem(); // _ZN9ItemActor13_validateItemEv
    ItemActor(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN9ItemActorC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
    void clientInitialize(BlockSource &, Vec3 const&, ItemStack const&, int, bool, bool); // _ZN9ItemActor16clientInitializeER11BlockSourceRK4Vec3RK9ItemStackibb
    void _setUnderwaterMovement(); // _ZN9ItemActor22_setUnderwaterMovementEv
    void _mergeWithNeighbours(); // _ZN9ItemActor20_mergeWithNeighboursEv
    void _defineEntityData(); // _ZN9ItemActor17_defineEntityDataEv
    void setSourceEntity(Actor const*); // _ZN9ItemActor15setSourceEntityEPK5Actor
    void _merge(ItemActor *); // _ZN9ItemActor6_mergeEPS_
};
