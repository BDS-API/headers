#pragma once

#include "ItemStackBase.h"


class ItemStack : ItemStackBase {

public:
    static long EMPTY_ITEM;

    ~ItemStack(); // _ZN9ItemStackD2Ev
    virtual void reinit(Item const&, int, int); // _ZN9ItemStack6reinitERK4Itemii
    virtual void reinit(BlockLegacy const&, int); // _ZN9ItemStack6reinitERK11BlockLegacyi
    ItemStack(); // _ZN9ItemStackC2Ev
    ItemStack(BlockLegacy const&, int); // _ZN9ItemStackC2ERK11BlockLegacyi
    ItemStack(Block const&, int, CompoundTag const*); // _ZN9ItemStackC2ERK5BlockiPK11CompoundTag
    ItemStack(Item const&); // _ZN9ItemStackC2ERK4Item
    ItemStack(Item const&, int); // _ZN9ItemStackC2ERK4Itemi
    ItemStack(Item const&, int, int); // _ZN9ItemStackC2ERK4Itemii
    ItemStack(Item const&, int, int, CompoundTag const*); // _ZN9ItemStackC2ERK4ItemiiPK11CompoundTag
    ItemStack(ItemInstance const&); // _ZN9ItemStackC2ERK12ItemInstance
    ItemStack(RecipeIngredient const&); // _ZN9ItemStackC2ERK16RecipeIngredient
    ItemStack(ItemStack const&); // _ZN9ItemStackC2ERKS_
    void getStrippedNetworkItem()const; // _ZNK9ItemStack22getStrippedNetworkItemEv
    void useOn(Actor &, int, int, int, unsigned char, float, float, float); // _ZN9ItemStack5useOnER5Actoriiihfff
    void getDestroySpeed(Block const&)const; // _ZNK9ItemStack15getDestroySpeedERK5Block
    void use(Player &); // _ZN9ItemStack3useER6Player
    void inventoryTick(Level &, Actor &, int, bool); // _ZN9ItemStack13inventoryTickER5LevelR5Actorib
    void useAsFuel(); // _ZN9ItemStack9useAsFuelEv
    void removeEnchants(); // _ZN9ItemStack14removeEnchantsEv
    void mineBlock(Block const&, int, int, int, Mob *); // _ZN9ItemStack9mineBlockERK5BlockiiiP3Mob
    void sameItemAndAuxAndBlockData(ItemStack const&)const; // _ZNK9ItemStack26sameItemAndAuxAndBlockDataERKS_
    void clone()const; // _ZNK9ItemStack5cloneEv
    void fromTag(CompoundTag const&); // _ZN9ItemStack7fromTagERK11CompoundTag
    void fromTag(CompoundTag const&, Level &); // _ZN9ItemStack7fromTagERK11CompoundTagR5Level
    void releaseUsing(Player *, int); // _ZN9ItemStack12releaseUsingEP6Playeri
    void getMaxUseDuration()const; // _ZNK9ItemStack17getMaxUseDurationEv
    void useTimeDepleted(Level *, Player *); // _ZN9ItemStack15useTimeDepletedEP5LevelP6Player
    void playSoundIncrementally(Mob &)const; // _ZNK9ItemStack22playSoundIncrementallyER3Mob
};
