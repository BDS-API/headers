#pragma once

#include <string>
#include "../util/BlockPos.h"
#include "Item.h"


class EndCrystalItem : Item {

public:
    ~EndCrystalItem(); // _ZN14EndCrystalItemD2Ev
    virtual bool isGlint(ItemStackBase const&)const; // _ZNK14EndCrystalItem7isGlintERK13ItemStackBase
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const; // _ZNK14EndCrystalItem6_useOnER9ItemStackR5Actor8BlockPoshfff
    EndCrystalItem(std::string const&, int); // _ZN14EndCrystalItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
