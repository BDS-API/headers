#pragma once

#include <string>
#include "../util/BlockPos.h"
#include "Item.h"


class FireChargeItem : Item {

public:
    ~FireChargeItem(); // _ZN14FireChargeItemD2Ev
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const; // _ZNK14FireChargeItem8dispenseER11BlockSourceR9ContaineriRK4Vec3h
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const; // _ZNK14FireChargeItem18_calculatePlacePosER9ItemStackR5ActorRhR8BlockPos
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const; // _ZNK14FireChargeItem6_useOnER9ItemStackR5Actor8BlockPoshfff
    FireChargeItem(std::string const&, int); // _ZN14FireChargeItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
