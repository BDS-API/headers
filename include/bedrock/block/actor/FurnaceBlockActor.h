#pragma once

#include <string>
#include "BlockActor.h"
#include "../../container/Container.h"


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

    ~FurnaceBlockActor(); // _ZN17FurnaceBlockActorD2Ev
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &); // _ZN17FurnaceBlockActor4loadER5LevelRK11CompoundTagR14DataLoadHelper
    virtual void save(CompoundTag &)const; // _ZNK17FurnaceBlockActor4saveER11CompoundTag
    virtual void onCustomTagLoadDone(BlockSource &); // _ZN17FurnaceBlockActor19onCustomTagLoadDoneER11BlockSource
    virtual void tick(BlockSource &); // _ZN17FurnaceBlockActor4tickER11BlockSource
    virtual bool isFinished(); // _ZN17FurnaceBlockActor10isFinishedEv
    virtual void getUpdatePacket(BlockSource &); // _ZN17FurnaceBlockActor15getUpdatePacketER11BlockSource
    virtual void onMove(); // _ZN17FurnaceBlockActor6onMoveEv
    virtual void onNeighborChanged(BlockSource &, BlockPos const&); // _ZN17FurnaceBlockActor17onNeighborChangedER11BlockSourceRK8BlockPos
    virtual std::string getName()const; // _ZNK17FurnaceBlockActor7getNameB5cxx11Ev
    virtual void getContainer(); // _ZN17FurnaceBlockActor12getContainerEv
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &); // _ZN17FurnaceBlockActor15_onUpdatePacketERK11CompoundTagR11BlockSource
    virtual void getItem(int)const; // _ZNK17FurnaceBlockActor7getItemEi
    virtual void setItem(int, ItemStack const&); // _ZN17FurnaceBlockActor7setItemEiRK9ItemStack
    virtual void getMaxStackSize()const; // _ZNK17FurnaceBlockActor15getMaxStackSizeEv
    virtual void getContainerSize()const; // _ZNK17FurnaceBlockActor16getContainerSizeEv
    virtual void startOpen(Player &); // _ZN17FurnaceBlockActor9startOpenER6Player
    virtual void stopOpen(Player &); // _ZN17FurnaceBlockActor8stopOpenER6Player
    virtual bool canPushInItem(BlockSource &, int, int, ItemInstance const&)const; // _ZNK17FurnaceBlockActor13canPushInItemER11BlockSourceiiRK12ItemInstance
    virtual bool canPullOutItem(BlockSource &, int, int, ItemInstance const&)const; // _ZNK17FurnaceBlockActor14canPullOutItemER11BlockSourceiiRK12ItemInstance
    bool isFuel(ItemInstance const&); // _ZN17FurnaceBlockActor6isFuelERK12ItemInstance
    void getBurnDuration(ItemInstance const&, int); // _ZN17FurnaceBlockActor15getBurnDurationERK12ItemInstancei
    FurnaceBlockActor(BlockPos const&); // _ZN17FurnaceBlockActorC2ERK8BlockPos
//  FurnaceBlockActor(BlockActorType, BlockPos const&, Util::HashString const&, LevelSoundEvent, ContainerType, int, Block const&, Block const&); //TODO: incomplete function definition // _ZN17FurnaceBlockActorC2E14BlockActorTypeRK8BlockPosRKN4Util10HashStringE15LevelSoundEvent13ContainerTypeiRK5BlockSC_
    void resetBurnProgress(); // _ZN17FurnaceBlockActor17resetBurnProgressEv
    void _correctXpValue(short)const; // _ZNK17FurnaceBlockActor15_correctXpValueEs
    void _refreshFurnaceBlockLitState(BlockSource &); // _ZN17FurnaceBlockActor28_refreshFurnaceBlockLitStateER11BlockSource
    bool isLit(); // _ZN17FurnaceBlockActor5isLitEv
    void _tryBroadcastBurnSound(BlockSource &); // _ZN17FurnaceBlockActor22_tryBroadcastBurnSoundER11BlockSource
    bool canBurn(Recipes const&); // _ZN17FurnaceBlockActor7canBurnERK7Recipes
    void checkForAlternativeFuelAchievement(BlockSource &, ItemStack const&); // _ZN17FurnaceBlockActor34checkForAlternativeFuelAchievementER11BlockSourceRK9ItemStack
    void burn(Recipes const&); // _ZN17FurnaceBlockActor4burnERK7Recipes
    void getBurnProgress(int); // _ZN17FurnaceBlockActor15getBurnProgressEi
    void getLitProgress(int); // _ZN17FurnaceBlockActor14getLitProgressEi
    bool isSlotEmpty(int); // _ZN17FurnaceBlockActor11isSlotEmptyEi
    bool isEmptiedByHopper(BlockSource &); // _ZN17FurnaceBlockActor17isEmptiedByHopperER11BlockSource
    void _getPositionOfNeighbor(int); // _ZN17FurnaceBlockActor22_getPositionOfNeighborEi
    bool isSlotDirty(int); // _ZN17FurnaceBlockActor11isSlotDirtyEi
    void resetSlotsDirty(); // _ZN17FurnaceBlockActor15resetSlotsDirtyEv
    void _resetAuxValueIfInvalid(ItemInstance &)const; // _ZNK17FurnaceBlockActor23_resetAuxValueIfInvalidER12ItemInstance
    void getLitTime()const; // _ZNK17FurnaceBlockActor10getLitTimeEv
    void setLitTime(int); // _ZN17FurnaceBlockActor10setLitTimeEi
    void getLitDuration()const; // _ZNK17FurnaceBlockActor14getLitDurationEv
    void setLitDuration(int); // _ZN17FurnaceBlockActor14setLitDurationEi
    void getTickCount()const; // _ZNK17FurnaceBlockActor12getTickCountEv
    void setTickCount(int); // _ZN17FurnaceBlockActor12setTickCountEi
    void getStoredXP()const; // _ZNK17FurnaceBlockActor11getStoredXPEv
    void setStoredXP(int); // _ZN17FurnaceBlockActor11setStoredXPEi
    void getLastFuelItem()const; // _ZNK17FurnaceBlockActor15getLastFuelItemEv
    void getXPRewardFromSmeltingItems(ItemInstance const&, int)const; // _ZNK17FurnaceBlockActor28getXPRewardFromSmeltingItemsERK12ItemInstancei
    void _roundXPReward(float)const; // _ZNK17FurnaceBlockActor14_roundXPRewardEf
    void _getXPRewardMultiplier(ItemInstance const&)const; // _ZNK17FurnaceBlockActor22_getXPRewardMultiplierERK12ItemInstance
    void storeXPRewardForRemovingWithHopper(ItemInstance const&, int); // _ZN17FurnaceBlockActor34storeXPRewardForRemovingWithHopperERK12ItemInstancei
    void withdrawStoredXPReward(); // _ZN17FurnaceBlockActor22withdrawStoredXPRewardEv
    void checkForSmeltEverythingAchievement(BlockSource &); // _ZN17FurnaceBlockActor34checkForSmeltEverythingAchievementER11BlockSource
    void onFurnaceBlockRemoved(BlockSource &); // _ZN17FurnaceBlockActor21onFurnaceBlockRemovedER11BlockSource
};
