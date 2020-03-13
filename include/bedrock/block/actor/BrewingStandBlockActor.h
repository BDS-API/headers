#pragma once

#include <string>
#include "BlockActor.h"
#include "../../container/Container.h"


class BrewingStandBlockActor : BlockActor, Container {

public:
    ~BrewingStandBlockActor(); // _ZN22BrewingStandBlockActorD2Ev
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &); // _ZN22BrewingStandBlockActor4loadER5LevelRK11CompoundTagR14DataLoadHelper
    virtual void save(CompoundTag &)const; // _ZNK22BrewingStandBlockActor4saveER11CompoundTag
    virtual void tick(BlockSource &); // _ZN22BrewingStandBlockActor4tickER11BlockSource
    virtual bool isFinished(); // _ZN22BrewingStandBlockActor10isFinishedEv
    virtual void onChanged(BlockSource &); // _ZN22BrewingStandBlockActor9onChangedER11BlockSource
    virtual void onMove(); // _ZN22BrewingStandBlockActor6onMoveEv
    virtual std::string getName()const; // _ZNK22BrewingStandBlockActor7getNameB5cxx11Ev
    virtual void getContainer(); // _ZN22BrewingStandBlockActor12getContainerEv
    virtual void getItem(int)const; // _ZNK22BrewingStandBlockActor7getItemEi
    virtual void setItem(int, ItemStack const&); // _ZN22BrewingStandBlockActor7setItemEiRK9ItemStack
    virtual void getMaxStackSize()const; // _ZNK22BrewingStandBlockActor15getMaxStackSizeEv
    virtual void getContainerSize()const; // _ZNK22BrewingStandBlockActor16getContainerSizeEv
    virtual void startOpen(Player &); // _ZN22BrewingStandBlockActor9startOpenER6Player
    virtual void stopOpen(Player &); // _ZN22BrewingStandBlockActor8stopOpenER6Player
    virtual bool canPushInItem(BlockSource &, int, int, ItemInstance const&)const; // _ZNK22BrewingStandBlockActor13canPushInItemER11BlockSourceiiRK12ItemInstance
    virtual bool canPullOutItem(BlockSource &, int, int, ItemInstance const&)const; // _ZNK22BrewingStandBlockActor14canPullOutItemER11BlockSourceiiRK12ItemInstance
    bool isFuel(ItemDescriptor const&); // _ZN22BrewingStandBlockActor6isFuelERK14ItemDescriptor
    void getFuelValue(ItemInstance const&); // _ZN22BrewingStandBlockActor12getFuelValueERK12ItemInstance
    BrewingStandBlockActor(BlockPos const&); // _ZN22BrewingStandBlockActorC2ERK8BlockPos
    bool canBrew(); // _ZN22BrewingStandBlockActor7canBrewEv
    void brew(); // _ZN22BrewingStandBlockActor4brewEv
    void getPotionSlotUsage()const; // _ZNK22BrewingStandBlockActor18getPotionSlotUsageEv
    bool isSlotEmpty(int)const; // _ZNK22BrewingStandBlockActor11isSlotEmptyEi
    void resetFinished(); // _ZN22BrewingStandBlockActor13resetFinishedEv
    void getBrewTime()const; // _ZNK22BrewingStandBlockActor11getBrewTimeEv
    void setBrewTime(int); // _ZN22BrewingStandBlockActor11setBrewTimeEi
    void getFuelAmount()const; // _ZNK22BrewingStandBlockActor13getFuelAmountEv
    void setFuelAmount(int); // _ZN22BrewingStandBlockActor13setFuelAmountEi
    void getFuelTotal()const; // _ZNK22BrewingStandBlockActor12getFuelTotalEv
    void setFuelTotal(int); // _ZN22BrewingStandBlockActor12setFuelTotalEi
    void getFinished()const; // _ZNK22BrewingStandBlockActor11getFinishedEv
    void setFinished(bool); // _ZN22BrewingStandBlockActor11setFinishedEb
    void getIngredient()const; // _ZNK22BrewingStandBlockActor13getIngredientEv
    void setIngredient(Item *); // _ZN22BrewingStandBlockActor13setIngredientEP4Item
};
