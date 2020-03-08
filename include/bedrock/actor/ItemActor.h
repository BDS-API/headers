#pragma once

#include "damagesource/ActorDamageSource"
#include "../nbt/CompoundTag"
#include "../block/unmapped/BlockSource"
#include "unmapped/ActorDefinitionGroup"
#include "../../unmapped/VariantParameterList"
#include "../item/ItemStack"
#include "../util/Vec3"
#include "unmapped/ActorDefinitionIdentifier"
#include "../../unmapped/DataLoadHelper"


class ItemActor : Actor {

public:
    static long LIFETIME;

    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual ItemActor::~ItemActor()
    virtual void getAddPacket();
    virtual void normalTick();
    virtual void playerTouch(Player &);
    virtual bool isInvulnerableTo(ActorDamageSource const&)const;
    virtual void handleEntityEvent(ActorEvent, int);
    virtual void getSourceUniqueID()const;
    virtual void getHandleWaterAABB()const;
    virtual bool canSynchronizeNewEntity()const;
    virtual bool canMakeStepSound()const;
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);

    void getItemStack();
    bool isFromFishing()const;
    void getItemStack()const;
    void setItemStack(ItemStack const&);
    void setDefaultPickUpDelay();
    void setIsFromFishing(bool);
    bool hasPickUpDelay();
    void _validateItem();
    ItemActor(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void clientInitialize(BlockSource &, Vec3 const&, ItemStack const&, int, bool, bool);
    void _setUnderwaterMovement();
    void _mergeWithNeighbours();
    void _defineEntityData();
    void setSourceEntity(Actor const*);
    void _merge(ItemActor*);
};
