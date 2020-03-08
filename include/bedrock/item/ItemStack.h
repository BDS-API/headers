#pragma once

#include "../actor/Mob"
#include "../../unmapped/Block"
#include "../level/Level"
#include "../../unmapped/RecipeIngredient"
#include "../block/BlockLegacy"
#include "../actor/Actor"
#include "../actor/Player"
#include "../nbt/CompoundTag"


class ItemStack : ItemStackBase {

public:
    static long EMPTY_ITEM;

    virtual ItemStack::~ItemStack();
    virtual void reinit(Item const&, int, int);
    virtual void reinit(BlockLegacy const&, int);

    ItemStack(void);
    ItemStack(BlockLegacy const&, int);
    ItemStack(Block const&, int, CompoundTag const*);
    ItemStack(Item const&);
    ItemStack(Item const&, int);
    ItemStack(Item const&, int, int);
    ItemStack(Item const&, int, int, CompoundTag const*);
    ItemStack(ItemInstance const&);
    ItemStack(RecipeIngredient const&);
    ItemStack(ItemStack const&);
    void getStrippedNetworkItem(void)const;
    void useOn(Actor &, int, int, int, unsigned char, float, float, float);
    void getDestroySpeed(Block const&)const;
    void use(Player &);
    void inventoryTick(Level &, Actor &, int, bool);
    void useAsFuel(void);
    void removeEnchants(void);
    void mineBlock(Block const&, int, int, int, Mob *);
    void sameItemAndAuxAndBlockData(ItemStack const&)const;
    void clone(void)const;
    void fromTag(CompoundTag const&);
    void fromTag(CompoundTag const&, Level &);
    void releaseUsing(Player *, int);
    void getMaxUseDuration(void)const;
    void useTimeDepleted(Level *, Player *);
    void playSoundIncrementally(Mob &)const;
};
