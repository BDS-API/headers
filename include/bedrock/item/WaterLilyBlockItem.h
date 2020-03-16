#pragma once

#include "BlockItem.h"
#include <string>
#include "../util/BlockPos.h"


class WaterLilyBlockItem : public BlockItem {

public:
    virtual ~WaterLilyBlockItem(); // _ZN18WaterLilyBlockItemD2Ev
    virtual void __fake_function0(); // fake
    virtual bool isLiquidClipItem(int)const; // _ZNK18WaterLilyBlockItem16isLiquidClipItemEi
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const; // _ZNK18WaterLilyBlockItem6_useOnER9ItemStackR5Actor8BlockPoshfff
    WaterLilyBlockItem(std::string const&, int); // _ZN18WaterLilyBlockItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
