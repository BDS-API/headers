#pragma once

#include "BlockItem.h"
#include <string>
#include "../util/BlockPos.h"


class ScaffoldingBlockItem : public BlockItem {

public:
    virtual ~ScaffoldingBlockItem(); // _ZN20ScaffoldingBlockItemD2Ev
    virtual void __fake_function0(); // fake
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const; // _ZNK20ScaffoldingBlockItem6_useOnER9ItemStackR5Actor8BlockPoshfff
    ScaffoldingBlockItem(std::string const&, int); // _ZN20ScaffoldingBlockItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
