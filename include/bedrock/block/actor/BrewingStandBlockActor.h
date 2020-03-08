#pragma once

#include "../../item/ItemStack"
#include "../../container/Container"
#include "../../item/unmapped/ItemDescriptor"
#include "../../../unmapped/DataLoadHelper"
#include "../../item/Item"
#include "../../util/BlockPos"
#include "../unmapped/BlockSource"
#include "../../actor/Player"
#include "../../item/ItemInstance"
#include "../../nbt/CompoundTag"
#include "../../level/Level"


class BrewingStandBlockActor : BlockActor, Container {

public:
    BrewingStandBlockActor::~BrewingStandBlockActor()
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void tick(BlockSource &);
    virtual bool isFinished();
    virtual void onChanged(BlockSource &);
    virtual void onMove();
    virtual void getName()const;
    virtual void getContainer();
    virtual void getItem(int)const;
    virtual void setItem(int, ItemStack const&);
    virtual void getMaxStackSize()const;
    virtual void getContainerSize()const;
    virtual void startOpen(Player &);
    virtual void stopOpen(Player &);
    virtual bool canPushInItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual bool canPullOutItem(BlockSource &, int, int, ItemInstance const&)const;

    bool isFuel(ItemDescriptor const&);
    void getFuelValue(ItemInstance const&);
    BrewingStandBlockActor(BlockPos const&);
    bool canBrew();
    void brew();
    void getPotionSlotUsage()const;
    bool isSlotEmpty(int)const;
    void resetFinished();
    void getBrewTime()const;
    void setBrewTime(int);
    void getFuelAmount()const;
    void setFuelAmount(int);
    void getFuelTotal()const;
    void setFuelTotal(int);
    void getFinished()const;
    void setFinished(bool);
    void getIngredient()const;
    void setIngredient(Item *);
};
