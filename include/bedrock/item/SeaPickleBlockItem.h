#pragma once

#include <string>
#include "../util/BlockPos.h"
#include "BlockItem.h"


class SeaPickleBlockItem : BlockItem {

public:
    ~SeaPickleBlockItem(); // _ZN18SeaPickleBlockItemD2Ev
    virtual void getLevelDataForAuxValue(int)const; // _ZNK18SeaPickleBlockItem23getLevelDataForAuxValueEi
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const; // _ZNK18SeaPickleBlockItem6_useOnER9ItemStackR5Actor8BlockPoshfff
    SeaPickleBlockItem(std::string const&, int); // _ZN18SeaPickleBlockItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
