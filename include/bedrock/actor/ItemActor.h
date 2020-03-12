#pragma once

#include "Player.h"
#include "../../unmapped/VariantParameterList.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "Actor.h"
#include "../util/Vec3.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../nbt/CompoundTag.h"
#include "../block/unmapped/BlockSource.h"
#include "../item/ItemStack.h"
#include "damagesource/ActorDamageSource.h"
#include "../../unmapped/DataLoadHelper.h"


class ItemActor : Actor {

public:
    static long LIFETIME;

//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual bool isInvulnerableTo(ActorDamageSource const&)const;
    ~ItemActor();
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition
    virtual void getHandleWaterAABB()const;
    virtual bool canSynchronizeNewEntity()const;
    virtual void normalTick();
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void getSourceUniqueID()const;
    virtual void playerTouch(Player &);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void getAddPacket();
    virtual bool canMakeStepSound()const;
    void setSourceEntity(Actor const*);
    void setIsFromFishing(bool);
    bool isFromFishing()const;
    void _merge(ItemActor *);
    void getItemStack()const;
    bool hasPickUpDelay();
    void _mergeWithNeighbours();
    ItemActor(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void setDefaultPickUpDelay();
    void _setUnderwaterMovement();
    void clientInitialize(BlockSource &, Vec3 const&, ItemStack const&, int, bool, bool);
    void setItemStack(ItemStack const&);
    void _validateItem();
    void _defineEntityData();
    void getItemStack();
};
