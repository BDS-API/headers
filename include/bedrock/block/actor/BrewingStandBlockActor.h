#pragma once

#include "../../../unmapped/BlockPos"
#include "../../level/Level"
#include "../../container/Container"
#include "../../../unmapped/BlockSource"
#include "../../actor/Player"
#include "../../item/ItemInstance"
#include "../../item/ItemStack"
#include "../../item/Item"
#include "../../nbt/CompoundTag"
#include "../../../unmapped/ItemDescriptor"


class BrewingStandBlockActor : BlockActor, Container {

public:
    virtual BrewingStandBlockActor::~BrewingStandBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void tick(BlockSource &);
    virtual bool isFinished(void);
    virtual void onChanged(BlockSource &);
    virtual void onMove(void);
    virtual void getName[abi:cxx11](void)const;
    virtual void getContainer(void);
    virtual void getItem(int)const;
    virtual void setItem(int, ItemStack const&);
    virtual void getMaxStackSize(void)const;
    virtual void getContainerSize(void)const;
    virtual void startOpen(Player &);
    virtual void stopOpen(Player &);
    virtual bool canPushInItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual bool canPullOutItem(BlockSource &, int, int, ItemInstance const&)const;

    bool isFuel(ItemDescriptor const&);
    void getFuelValue(ItemInstance const&);
    BrewingStandBlockActor(BlockPos const&);
    bool canBrew(void);
    void brew(void);
    void getPotionSlotUsage(void)const;
    bool isSlotEmpty(int)const;
    void resetFinished(void);
    void getBrewTime(void)const;
    void setBrewTime(int);
    void getFuelAmount(void)const;
    void setFuelAmount(int);
    void getFuelTotal(void)const;
    void setFuelTotal(int);
    void getFinished(void)const;
    void setFinished(bool);
    void getIngredient(void)const;
    void setIngredient(Item *);
};
