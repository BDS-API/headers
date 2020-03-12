#pragma once

#include <string>
#include "../../container/Container.h"
#include "BlockActor.h"


class FurnaceBlockActor : BlockActor, Container {

public:
    static std::string ITEMS_LIST_KEY;
    static std::string SLOT_KEY;
    static std::string BURN_TIME_KEY;
    static std::string COOK_TIME_KEY;
    static std::string BURN_DURATION_KEY;
    static std::string STORED_XP_DEPRECATED_KEY;
    static std::string STORED_XP_KEY;
    static std::string CUSTOM_NAME_KEY;
    static std::string LAST_FUEL_KEY;

    virtual void getItem(int)const;
    virtual void save(CompoundTag &)const;
    virtual void getContainer();
    virtual bool isFinished();
    virtual void setItem(int, ItemStack const&);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    ~FurnaceBlockActor();
    virtual void getContainerSize()const;
    virtual void onCustomTagLoadDone(BlockSource &);
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void onNeighborChanged(BlockSource &, BlockPos const&);
    virtual void onMove();
    virtual void stopOpen(Player &);
    virtual void getUpdatePacket(BlockSource &);
    virtual std::string getName()const;
    virtual void startOpen(Player &);
    virtual bool canPullOutItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual bool canPushInItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual void tick(BlockSource &);
    virtual void getMaxStackSize()const;
    void getLastFuelItem()const;
    void checkForAlternativeFuelAchievement(BlockSource &, ItemStack const&);
    void resetBurnProgress();
    void getBurnProgress(int);
    void getLitTime()const;
    FurnaceBlockActor(BlockPos const&);
    void getXPRewardFromSmeltingItems(ItemInstance const&, int)const;
    void setLitDuration(int);
    void _roundXPReward(float)const;
    bool isSlotDirty(int);
    void _tryBroadcastBurnSound(BlockSource &);
    void _correctXpValue(short)const;
    bool isLit();
    void _getXPRewardMultiplier(ItemInstance const&)const;
    void storeXPRewardForRemovingWithHopper(ItemInstance const&, int);
    void checkForSmeltEverythingAchievement(BlockSource &);
//  FurnaceBlockActor(BlockActorType, BlockPos const&, Util::HashString const&, LevelSoundEvent, ContainerType, int, Block const&, Block const&); //TODO: incomplete function definition
    void getStoredXP()const;
    void resetSlotsDirty();
    void _refreshFurnaceBlockLitState(BlockSource &);
    bool isFuel(ItemInstance const&);
    void setTickCount(int);
    void getTickCount()const;
    void _getPositionOfNeighbor(int);
    bool isSlotEmpty(int);
    void setLitTime(int);
    void getBurnDuration(ItemInstance const&, int);
    bool isEmptiedByHopper(BlockSource &);
    void withdrawStoredXPReward();
    void onFurnaceBlockRemoved(BlockSource &);
    void _resetAuxValueIfInvalid(ItemInstance &)const;
    void getLitDuration()const;
    bool canBurn(Recipes const&);
    void setStoredXP(int);
    void burn(Recipes const&);
    void getLitProgress(int);
};
