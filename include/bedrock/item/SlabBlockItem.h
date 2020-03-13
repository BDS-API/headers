#pragma once

#include <string>
#include "../util/BlockPos.h"
#include "BlockItem.h"


class SlabBlockItem : BlockItem {

public:
    ~SlabBlockItem(); // _ZN13SlabBlockItemD2Ev
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const; // _ZNK13SlabBlockItem6_useOnER9ItemStackR5Actor8BlockPoshfff
    SlabBlockItem(std::string const&, int); // _ZN13SlabBlockItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void _trySetDoubleBlock(BlockSource &, Level &, BlockPos const&, Actor &, ItemStack &, Block const&, Block const*)const; // _ZNK13SlabBlockItem18_trySetDoubleBlockER11BlockSourceR5LevelRK8BlockPosR5ActorR9ItemStackRK5BlockPSC_
    void _convertToDoubleSlab(BlockSource &, Level &, BlockPos const&, ItemStack &, Actor &, Block const&, ItemState const&, int)const; // _ZNK13SlabBlockItem20_convertToDoubleSlabER11BlockSourceR5LevelRK8BlockPosR9ItemStackR5ActorRK5BlockRK9ItemStatei
};
