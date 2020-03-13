#pragma once

#include <string>
#include "../util/BlockPos.h"
#include "BlockItem.h"


class TopSnowBlockItem : BlockItem {

public:
    ~TopSnowBlockItem(); // _ZN16TopSnowBlockItemD2Ev
    virtual void getLevelDataForAuxValue(int)const; // _ZNK16TopSnowBlockItem23getLevelDataForAuxValueEi
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const; // _ZNK16TopSnowBlockItem6_useOnER9ItemStackR5Actor8BlockPoshfff
    TopSnowBlockItem(std::string const&, int); // _ZN16TopSnowBlockItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
