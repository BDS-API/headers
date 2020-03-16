#pragma once

#include "BlockItem.h"
#include <string>
#include "../util/BlockPos.h"


class TopSnowBlockItem : public BlockItem {

public:
    virtual ~TopSnowBlockItem(); // _ZN16TopSnowBlockItemD2Ev
    virtual void __fake_function0(); // fake
    virtual void getLevelDataForAuxValue(int)const; // _ZNK16TopSnowBlockItem23getLevelDataForAuxValueEi
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const; // _ZNK16TopSnowBlockItem6_useOnER9ItemStackR5Actor8BlockPoshfff
    TopSnowBlockItem(std::string const&, int); // _ZN16TopSnowBlockItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
