#pragma once

#include "ItemStackBase.h"


class ItemStack : ItemStackBase {

public:
    static long EMPTY_ITEM;

    virtual void reinit(BlockLegacy const&, int);
    virtual void reinit(Item const&, int, int);
    ~ItemStack();
    void use(Player &);
    void clone()const;
    void getStrippedNetworkItem()const;
    void inventoryTick(Level &, Actor &, int, bool);
    void playSoundIncrementally(Mob &)const;
    ItemStack();
    ItemStack(Item const&);
    void getMaxUseDuration()const;
    void getDestroySpeed(Block const&)const;
    ItemStack(Block const&, int, CompoundTag const*);
    void sameItemAndAuxAndBlockData(ItemStack const&)const;
    ItemStack(Item const&, int, int);
    void useTimeDepleted(Level *, Player *);
    void useOn(Actor &, int, int, int, unsigned char, float, float, float);
    ItemStack(RecipeIngredient const&);
    ItemStack(BlockLegacy const&, int);
    void fromTag(CompoundTag const&, Level &);
    void mineBlock(Block const&, int, int, int, Mob *);
    ItemStack(Item const&, int);
    ItemStack(ItemStack const&);
    void fromTag(CompoundTag const&);
    void useAsFuel();
    void removeEnchants();
    ItemStack(Item const&, int, int, CompoundTag const*);
    void releaseUsing(Player *, int);
    ItemStack(ItemInstance const&);
};
