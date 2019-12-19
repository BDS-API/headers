#pragma once

class ItemActor : Actor {

public:
    static long LIFETIME;

    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual ~ItemActor();
    virtual void getAddPacket(void);
    virtual void normalTick(void);
    virtual void playerTouch(Player &);
    virtual bool isInvulnerableTo(ActorDamageSource const&)const;
    virtual void handleEntityEvent(ActorEvent, int);
    virtual void getSourceUniqueID(void)const;
    virtual void getHandleWaterAABB(void)const;
    virtual bool canSynchronizeNewEntity(void)const;
    virtual bool canMakeStepSound(void)const;
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);

    void getItemStack(void);
    bool isFromFishing(void)const;
    void getItemStack(void)const;
    void setItemStack(ItemStack const&);
    void setDefaultPickUpDelay(void);
    void setIsFromFishing(bool);
    bool hasPickUpDelay(void);
    void _validateItem(void);
    void ItemActor(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void clientInitialize(BlockSource &, Vec3 const&, ItemStack const&, int, bool, bool);
    void _setUnderwaterMovement(void);
    void _mergeWithNeighbours(void);
    void _defineEntityData(void);
    void setSourceEntity(Actor const*);
    void _merge(ItemActor*);
};
