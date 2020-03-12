#pragma once

#include "../block/BlockLegacy.h"
#include "../actor/Actor.h"
#include "ItemInstance.h"
#include "../nbt/CompoundTag.h"
#include "../../unmapped/RecipeIngredient.h"
#include "../../unmapped/Block.h"
#include "../actor/Mob.h"
#include "Item.h"
#include "../level/Level.h"
#include "../actor/Player.h"
#include "ItemStackBase.h"


class ItemStack : ItemStackBase {

public:
    static long EMPTY_ITEM;

    ~ItemStack();
    virtual void reinit(Item const&, int, int);
    virtual void reinit(BlockLegacy const&, int);
    ItemStack(BlockLegacy const&, int);
    ItemStack(RecipeIngredient const&);
    ItemStack(Item const&, int, int);
    void getDestroySpeed(Block const&)const;
    void mineBlock(Block const&, int, int, int, Mob *);
    void removeEnchants();
    void fromTag(CompoundTag const&, Level &);
    void useOn(Actor &, int, int, int, unsigned char, float, float, float);
    void playSoundIncrementally(Mob &)const;
    ItemStack(ItemInstance const&);
    void getStrippedNetworkItem()const;
    void releaseUsing(Player *, int);
    void getMaxUseDuration()const;
    ItemStack(Item const&, int, int, CompoundTag const*);
    void clone()const;
    ItemStack(Item const&);
    void fromTag(CompoundTag const&);
    void useTimeDepleted(Level *, Player *);
    void sameItemAndAuxAndBlockData(ItemStack const&)const;
    void inventoryTick(Level &, Actor &, int, bool);
    ItemStack(Item const&, int);
    void use(Player &);
    void useAsFuel();
    ItemStack();
    ItemStack(ItemStack const&);
    ItemStack(Block const&, int, CompoundTag const*);
};
