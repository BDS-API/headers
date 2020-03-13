#pragma once

#include <string>
#include "../util/BlockPos.h"
#include "Item.h"


class HoeItem : Item {

public:
    ~HoeItem(); // _ZN7HoeItemD2Ev
    virtual bool isHandEquipped()const; // _ZNK7HoeItem14isHandEquippedEv
    virtual void getEnchantSlot()const; // _ZNK7HoeItem14getEnchantSlotEv
    virtual void hurtEnemy(ItemStack &, Mob *, Mob *)const; // _ZNK7HoeItem9hurtEnemyER9ItemStackP3MobS3_
    virtual void mineBlock(ItemStack &, Block const&, int, int, int, Actor *)const; // _ZNK7HoeItem9mineBlockER9ItemStackRK5BlockiiiP5Actor
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const; // _ZNK7HoeItem6_useOnER9ItemStackR5Actor8BlockPoshfff
    HoeItem(std::string const&, int, Item::Tier); // _ZN7HoeItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiN4Item4TierE
};
