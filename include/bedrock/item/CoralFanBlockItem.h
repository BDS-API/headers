#pragma once

#include "BlockItem.h"
#include <string>
#include "../util/BlockPos.h"


class CoralFanBlockItem : public BlockItem {

public:
    virtual ~CoralFanBlockItem(); // _ZN17CoralFanBlockItemD2Ev
    virtual void __fake_function0(); // fake
    virtual void getLevelDataForAuxValue(int)const; // _ZNK17CoralFanBlockItem23getLevelDataForAuxValueEi
    virtual bool isValidAuxValue(int)const; // _ZNK17CoralFanBlockItem15isValidAuxValueEi
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const; // _ZNK17CoralFanBlockItem6_useOnER9ItemStackR5Actor8BlockPoshfff
    CoralFanBlockItem(std::string const&, int); // _ZN17CoralFanBlockItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
