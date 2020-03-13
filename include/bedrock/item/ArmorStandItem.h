#pragma once

#include <string>
#include "../util/BlockPos.h"
#include "Item.h"


class ArmorStandItem : Item {

public:
    ~ArmorStandItem(); // _ZN14ArmorStandItemD2Ev
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const; // _ZNK14ArmorStandItem6_useOnER9ItemStackR5Actor8BlockPoshfff
    ArmorStandItem(std::string const&, short); // _ZN14ArmorStandItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEs
    void _shouldRemove(BlockSource &, BlockPos)const; // _ZNK14ArmorStandItem13_shouldRemoveER11BlockSource8BlockPos
};
