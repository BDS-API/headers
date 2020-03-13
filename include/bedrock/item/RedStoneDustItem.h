#pragma once

#include <string>
#include "../util/BlockPos.h"
#include "Item.h"


class RedStoneDustItem : Item {

public:
    ~RedStoneDustItem(); // _ZN16RedStoneDustItemD2Ev
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const; // _ZNK16RedStoneDustItem18_calculatePlacePosER9ItemStackR5ActorRhR8BlockPos
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const; // _ZNK16RedStoneDustItem6_useOnER9ItemStackR5Actor8BlockPoshfff
    RedStoneDustItem(std::string const&, int); // _ZN16RedStoneDustItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
