#pragma once

#include <string>
#include "../util/BlockPos.h"
#include "Item.h"


class BottleItem : Item {

public:
    ~BottleItem(); // _ZN10BottleItemD2Ev
    virtual bool isLiquidClipItem(int)const; // _ZNK10BottleItem16isLiquidClipItemEi
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const; // _ZNK10BottleItem8dispenseER11BlockSourceR9ContaineriRK4Vec3h
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const; // _ZNK10BottleItem6_useOnER9ItemStackR5Actor8BlockPoshfff
    BottleItem(std::string const&, int); // _ZN10BottleItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void _createBottledItem(Actor &, ItemStack &, Item const&)const; // _ZNK10BottleItem18_createBottledItemER5ActorR9ItemStackRK4Item
    void _fillBottleViaDispenser(BlockSource &, Item const&, Container &, int, Vec3 const&, unsigned char)const; // _ZNK10BottleItem23_fillBottleViaDispenserER11BlockSourceRK4ItemR9ContaineriRK4Vec3h
};
