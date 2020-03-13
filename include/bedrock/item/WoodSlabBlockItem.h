#pragma once

#include <string>
#include "SlabBlockItem.h"


class WoodSlabBlockItem : SlabBlockItem {

public:
    ~WoodSlabBlockItem(); // _ZN17WoodSlabBlockItemD2Ev
    virtual void getLevelDataForAuxValue(int)const; // _ZNK17WoodSlabBlockItem23getLevelDataForAuxValueEi
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const; // _ZNK17WoodSlabBlockItem18_calculatePlacePosER9ItemStackR5ActorRhR8BlockPos
    WoodSlabBlockItem(std::string const&, int); // _ZN17WoodSlabBlockItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
