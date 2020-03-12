#pragma once

#include "BlockActor.h"
#include "../../item/ItemStack.h"
#include "../../container/Container.h"
#include "../../item/ItemInstance.h"
#include "../../../unmapped/DataLoadHelper.h"
#include "../../item/Item.h"
#include "../../level/Level.h"
#include "../../nbt/CompoundTag.h"
#include "../unmapped/BlockSource.h"
#include "../../util/BlockPos.h"
#include "../../item/unmapped/ItemDescriptor.h"
#include "../../actor/Player.h"


class BrewingStandBlockActor : BlockActor, Container {

public:
    virtual void tick(BlockSource &);
    virtual void onChanged(BlockSource &);
    virtual void getMaxStackSize()const;
    virtual void startOpen(Player &);
    virtual void stopOpen(Player &);
    ~BrewingStandBlockActor();
    virtual void onMove();
    virtual void getContainer();
    virtual bool canPullOutItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void getItem(int)const;
    virtual bool canPushInItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual bool isFinished();
    virtual void getContainerSize()const;
    virtual void save(CompoundTag &)const;
    virtual std::string getName()const;
    virtual void setItem(int, ItemStack const&);
    void setFuelTotal(int);
    void getBrewTime()const;
    void getIngredient()const;
    void setFuelAmount(int);
    BrewingStandBlockActor(BlockPos const&);
    void getFuelValue(ItemInstance const&);
    bool canBrew();
    void getPotionSlotUsage()const;
    bool isSlotEmpty(int)const;
    void resetFinished();
    void getFinished()const;
    void getFuelAmount()const;
    void setBrewTime(int);
    bool isFuel(ItemDescriptor const&);
    void setFinished(bool);
    void setIngredient(Item *);
    void getFuelTotal()const;
    void brew();
};
