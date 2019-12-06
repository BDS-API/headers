#pragma once

class FurnaceBlockActor : BlockActor, Container {

public:
    virtual ~FurnaceBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void onCustomTagLoadDone(BlockSource &);
    virtual void tick(BlockSource &);
    virtual bool isFinished(void);
    virtual void getUpdatePacket(BlockSource &);
    virtual void onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void onMove(void);
    virtual void onNeighborChanged(BlockSource &, BlockPos const&);
    virtual void getContainer(void);
    virtual void getItem(int)const;
    virtual void setItem(int, ItemStack const&);
    virtual void getMaxStackSize(void)const;
    virtual void getContainerSize(void)const;
    virtual void startOpen(Player &);
    virtual void stopOpen(Player &);
    virtual bool canPushInItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual bool canPullOutItem(BlockSource &, int, int, ItemInstance const&)const;

    bool isFuel(ItemInstance const&);
    void getBurnDuration(ItemInstance const&, int);
    void FurnaceBlockActor(BlockPos const&);
    void FurnaceBlockActor(BlockActorType, BlockPos const&, Util::HashString const&, LevelSoundEvent, ContainerType, int, Block const&, Block const&);
    void resetBurnProgress(void);
    void _correctXpValue(short)const;
    void _refreshFurnaceBlockLitState(BlockSource &);
    bool isLit(void);
    void _tryBroadcastBurnSound(BlockSource &);
    bool canBurn(Recipes const&);
    void checkForAlternativeFuelAchievement(BlockSource &, ItemStack const&);
    void burn(Recipes const&);
    void getBurnProgress(int);
    void getLitProgress(int);
    bool isSlotEmpty(int);
    bool isEmptiedByHopper(BlockSource &);
    void _getPositionOfNeighbor(int);
    bool isSlotDirty(int);
    void resetSlotsDirty(void);
    void _resetAuxValueIfInvalid(ItemInstance &)const;
    void getLitTime(void)const;
    void setLitTime(int);
    void getLitDuration(void)const;
    void setLitDuration(int);
    void getTickCount(void)const;
    void setTickCount(int);
    void getStoredXP(void)const;
    void setStoredXP(int);
    void getLastFuelItem(void)const;
    void getXPRewardFromSmeltingItems(ItemInstance const&, int)const;
    void _roundXPReward(float)const;
    void _getXPRewardMultiplier(ItemInstance const&)const;
    void storeXPRewardForRemovingWithHopper(ItemInstance const&, int);
    void withdrawStoredXPReward(void);
    void checkForSmeltEverythingAchievement(BlockSource &);
    void onFurnaceBlockRemoved(BlockSource &);
};
