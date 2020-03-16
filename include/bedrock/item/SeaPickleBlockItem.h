#pragma once

#include "BlockItem.h"
#include <string>
#include "../util/BlockPos.h"


class SeaPickleBlockItem : public BlockItem {

public:
    virtual ~SeaPickleBlockItem(); // _ZN18SeaPickleBlockItemD2Ev
    virtual void __fake_function0(); // fake
    virtual void getLevelDataForAuxValue(int)const; // _ZNK18SeaPickleBlockItem23getLevelDataForAuxValueEi
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const; // _ZNK18SeaPickleBlockItem6_useOnER9ItemStackR5Actor8BlockPoshfff
    SeaPickleBlockItem(std::string const&, int); // _ZN18SeaPickleBlockItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
