#pragma once

#include "../../../unmapped/Recipes.h"
#include "../../container/Container.h"
#include "../../../unmapped/Block.h"
#include <string>
#include "./BlockActor.h"
#include "../../nbt/CompoundTag.h"
#include "../../../unmapped/HashString.h"
#include "../../level/Level.h"
#include "../../../unmapped/DataLoadHelper.h"
#include "../../util/BlockPos.h"
#include "../../item/ItemInstance.h"
#include "../../item/ItemStack.h"
#include "../unmapped/BlockSource.h"
#include "../../actor/Player.h"


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

    virtual ~FurnaceBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void onCustomTagLoadDone(BlockSource &);
    virtual void tick(BlockSource &);
    virtual bool isFinished();
    virtual void getUpdatePacket(BlockSource &);
    virtual void onMove();
    virtual void onNeighborChanged(BlockSource &, BlockPos const&);
    virtual std::string getName()const;
    virtual void getContainer();
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void getItem(int)const;
    virtual void setItem(int, ItemStack const&);
    virtual void getMaxStackSize()const;
    virtual void getContainerSize()const;
    virtual void startOpen(Player &);
    virtual void stopOpen(Player &);
    virtual bool canPushInItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual bool canPullOutItem(BlockSource &, int, int, ItemInstance const&)const;

    bool isFuel(ItemInstance const&);
    void getBurnDuration(ItemInstance const&, int);
    FurnaceBlockActor(BlockPos const&);
//  FurnaceBlockActor(BlockActorType, BlockPos const&, Util::HashString const&, LevelSoundEvent, ContainerType, int, Block const&, Block const&); //TODO: incomplete function definition
    void resetBurnProgress();
    void _correctXpValue(short)const;
    void _refreshFurnaceBlockLitState(BlockSource &);
    bool isLit();
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
    void resetSlotsDirty();
    void _resetAuxValueIfInvalid(ItemInstance &)const;
    void getLitTime()const;
    void setLitTime(int);
    void getLitDuration()const;
    void setLitDuration(int);
    void getTickCount()const;
    void setTickCount(int);
    void getStoredXP()const;
    void setStoredXP(int);
    void getLastFuelItem()const;
    void getXPRewardFromSmeltingItems(ItemInstance const&, int)const;
    void _roundXPReward(float)const;
    void _getXPRewardMultiplier(ItemInstance const&)const;
    void storeXPRewardForRemovingWithHopper(ItemInstance const&, int);
    void withdrawStoredXPReward();
    void checkForSmeltEverythingAchievement(BlockSource &);
    void onFurnaceBlockRemoved(BlockSource &);
};
