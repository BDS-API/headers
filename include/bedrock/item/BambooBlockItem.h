#pragma once

#include <string>
#include "../util/BlockPos.h"
#include "BlockItem.h"


class BambooBlockItem : BlockItem {

public:
    ~BambooBlockItem(); // _ZN15BambooBlockItemD2Ev
    virtual void getLevelDataForAuxValue(int)const; // _ZNK15BambooBlockItem23getLevelDataForAuxValueEi
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const; // _ZNK15BambooBlockItem6_useOnER9ItemStackR5Actor8BlockPoshfff
    BambooBlockItem(std::string const&, int); // _ZN15BambooBlockItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
