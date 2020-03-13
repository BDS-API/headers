#pragma once

#include <string>
#include "../util/BlockPos.h"
#include "BlockItem.h"


class BellBlockItem : BlockItem {

public:
    ~BellBlockItem(); // _ZN13BellBlockItemD2Ev
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const; // _ZNK13BellBlockItem6_useOnER9ItemStackR5Actor8BlockPoshfff
    BellBlockItem(std::string const&, int); // _ZN13BellBlockItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
