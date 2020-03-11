#pragma once

#include "../actor/Mob.h"
#include "./ItemStackBase.h"
#include "./ItemInstance.h"
#include "../../unmapped/RecipeIngredient.h"
#include "./Item.h"
#include "../level/Level.h"
#include "../actor/Actor.h"
#include "../actor/Player.h"
#include "../block/BlockLegacy.h"
#include "../nbt/CompoundTag.h"
#include "./ItemStack.h"
#include "../../unmapped/Block.h"


class ItemStack : ItemStackBase {

public:
    static long EMPTY_ITEM;

    virtual ~ItemStack();
    virtual void reinit(Item const&, int, int);
    virtual void reinit(BlockLegacy const&, int);

    ItemStack();
    ItemStack(BlockLegacy const&, int);
    ItemStack(Block const&, int, CompoundTag const*);
    ItemStack(Item const&);
    ItemStack(Item const&, int);
    ItemStack(Item const&, int, int);
    ItemStack(Item const&, int, int, CompoundTag const*);
    ItemStack(ItemInstance const&);
    ItemStack(RecipeIngredient const&);
    ItemStack(ItemStack const&);
    void getStrippedNetworkItem()const;
    void useOn(Actor &, int, int, int, unsigned char, float, float, float);
    void getDestroySpeed(Block const&)const;
    void use(Player &);
    void inventoryTick(Level &, Actor &, int, bool);
    void useAsFuel();
    void removeEnchants();
    void mineBlock(Block const&, int, int, int, Mob *);
    void sameItemAndAuxAndBlockData(ItemStack const&)const;
    void clone()const;
    void fromTag(CompoundTag const&);
    void fromTag(CompoundTag const&, Level &);
    void releaseUsing(Player *, int);
    void getMaxUseDuration()const;
    void useTimeDepleted(Level *, Player *);
    void playSoundIncrementally(Mob &)const;
};
