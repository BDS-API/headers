#pragma once

#include "BlockActor.h"
#include "../../../unmapped/Block.h"
#include "../../item/ItemStack.h"
#include "../../container/Container.h"
#include "../../../unmapped/HashString.h"
#include "../../item/ItemInstance.h"
#include "../../../unmapped/DataLoadHelper.h"
#include "../../actor/Player.h"
#include <string>
#include "../../level/Level.h"
#include "../../nbt/CompoundTag.h"
#include "../unmapped/BlockSource.h"
#include "../../util/BlockPos.h"
#include "../../../unmapped/Recipes.h"


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

    virtual void onMove();
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void onNeighborChanged(BlockSource &, BlockPos const&);
    virtual void getItem(int)const;
    virtual void setItem(int, ItemStack const&);
    virtual bool canPushInItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual std::string getName()const;
    virtual void getContainer();
    virtual bool canPullOutItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual void startOpen(Player &);
    virtual void getMaxStackSize()const;
    virtual void onCustomTagLoadDone(BlockSource &);
    virtual void save(CompoundTag &)const;
    virtual bool isFinished();
    ~FurnaceBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void stopOpen(Player &);
    virtual void tick(BlockSource &);
    virtual void getContainerSize()const;
    void checkForAlternativeFuelAchievement(BlockSource &, ItemStack const&);
    void _getPositionOfNeighbor(int);
    void getLitDuration()const;
    void getBurnDuration(ItemInstance const&, int);
    void storeXPRewardForRemovingWithHopper(ItemInstance const&, int);
    void _resetAuxValueIfInvalid(ItemInstance &)const;
    FurnaceBlockActor(BlockPos const&);
    void resetSlotsDirty();
    void _tryBroadcastBurnSound(BlockSource &);
    void getLitTime()const;
    void checkForSmeltEverythingAchievement(BlockSource &);
    void getLitProgress(int);
    void setTickCount(int);
    void getLastFuelItem()const;
    void setLitTime(int);
    void getStoredXP()const;
    void setLitDuration(int);
    bool isSlotDirty(int);
    bool isEmptiedByHopper(BlockSource &);
    bool isFuel(ItemInstance const&);
    bool isSlotEmpty(int);
    bool isLit();
    void setStoredXP(int);
    void _roundXPReward(float)const;
//  FurnaceBlockActor(BlockActorType, BlockPos const&, Util::HashString const&, LevelSoundEvent, ContainerType, int, Block const&, Block const&); //TODO: incomplete function definition
    void onFurnaceBlockRemoved(BlockSource &);
    void getXPRewardFromSmeltingItems(ItemInstance const&, int)const;
    void withdrawStoredXPReward();
    void getBurnProgress(int);
    void resetBurnProgress();
    void getTickCount()const;
    bool canBurn(Recipes const&);
    void _refreshFurnaceBlockLitState(BlockSource &);
    void _getXPRewardMultiplier(ItemInstance const&)const;
    void _correctXpValue(short)const;
    void burn(Recipes const&);
};
