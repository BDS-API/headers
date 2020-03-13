#pragma once

#include <string>
#include "../util/BlockPos.h"
#include "Item.h"


class MinecartItem : Item {

public:
    ~MinecartItem(); // _ZN12MinecartItemD2Ev
    virtual bool isDestructive(int)const; // _ZNK12MinecartItem13isDestructiveEi
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const; // _ZNK12MinecartItem8dispenseER11BlockSourceR9ContaineriRK4Vec3h
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const; // _ZNK12MinecartItem6_useOnER9ItemStackR5Actor8BlockPoshfff
//  MinecartItem(std::string const&, int, MinecartType); //TODO: incomplete function definition // _ZN12MinecartItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi12MinecartType
};
