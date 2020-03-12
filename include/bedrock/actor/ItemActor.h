#pragma once

#include "Actor.h"


class ItemActor : Actor {

public:
    static long LIFETIME;

    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual bool isInvulnerableTo(ActorDamageSource const&)const;
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void normalTick();
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition
    ~ItemActor();
    virtual void playerTouch(Player &);
    virtual bool canMakeStepSound()const;
    virtual void getAddPacket();
    virtual void getHandleWaterAABB()const;
    virtual void getSourceUniqueID()const;
    virtual bool canSynchronizeNewEntity()const;
    virtual void addAdditionalSaveData(CompoundTag &);
    ItemActor(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void setItemStack(ItemStack const&);
    void setDefaultPickUpDelay();
    bool isFromFishing()const;
    void _setUnderwaterMovement();
    void getItemStack()const;
    void _mergeWithNeighbours();
    void _defineEntityData();
    void setSourceEntity(Actor const*);
    void clientInitialize(BlockSource &, Vec3 const&, ItemStack const&, int, bool, bool);
    void _merge(ItemActor *);
    void _validateItem();
    void setIsFromFishing(bool);
    void getItemStack();
    bool hasPickUpDelay();
};
