#pragma once

#include <string>
#include "SlabBlockItem.h"


class StoneSlabBlockItem : SlabBlockItem {

public:
    ~StoneSlabBlockItem(); // _ZN18StoneSlabBlockItemD2Ev
    virtual void getLevelDataForAuxValue(int)const; // _ZNK18StoneSlabBlockItem23getLevelDataForAuxValueEi
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const; // _ZNK18StoneSlabBlockItem18_calculatePlacePosER9ItemStackR5ActorRhR8BlockPos
    StoneSlabBlockItem(std::string const&, int); // _ZN18StoneSlabBlockItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
