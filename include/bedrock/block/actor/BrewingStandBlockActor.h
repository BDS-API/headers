#pragma once

#include <string>
#include "../../container/Container.h"
#include "BlockActor.h"


class BrewingStandBlockActor : BlockActor, Container {

public:
    ~BrewingStandBlockActor();
    virtual std::string getName()const;
    virtual void getItem(int)const;
    virtual bool isFinished();
    virtual void tick(BlockSource &);
    virtual void getMaxStackSize()const;
    virtual void save(CompoundTag &)const;
    virtual void startOpen(Player &);
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void onMove();
    virtual void getContainerSize()const;
    virtual void stopOpen(Player &);
    virtual void onChanged(BlockSource &);
    virtual bool canPullOutItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual void getContainer();
    virtual bool canPushInItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual void setItem(int, ItemStack const&);
    void getPotionSlotUsage()const;
    void setFuelTotal(int);
    bool canBrew();
    void setFinished(bool);
    void setBrewTime(int);
    void getIngredient()const;
    BrewingStandBlockActor(BlockPos const&);
    void brew();
    void setFuelAmount(int);
    void resetFinished();
    void setIngredient(Item *);
    bool isFuel(ItemDescriptor const&);
    bool isSlotEmpty(int)const;
    void getFuelAmount()const;
    void getBrewTime()const;
    void getFinished()const;
    void getFuelTotal()const;
    void getFuelValue(ItemInstance const&);
};
