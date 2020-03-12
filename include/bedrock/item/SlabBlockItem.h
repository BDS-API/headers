#pragma once

#include <string>
#include "../util/BlockPos.h"
#include "BlockItem.h"


class SlabBlockItem : BlockItem {

public:
    ~SlabBlockItem();
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    SlabBlockItem(std::string const&, int);
    void _trySetDoubleBlock(BlockSource &, Level &, BlockPos const&, Actor &, ItemStack &, Block const&, Block const*)const;
    void _convertToDoubleSlab(BlockSource &, Level &, BlockPos const&, ItemStack &, Actor &, Block const&, ItemState const&, int)const;
};
