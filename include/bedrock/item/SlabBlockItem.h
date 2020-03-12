#pragma once

#include "ItemStack.h"
#include "../util/BlockPos.h"
#include <string>
#include "../actor/Actor.h"
#include "BlockItem.h"
#include "../../unmapped/Block.h"
#include "unmapped/ItemState.h"
#include "../level/Level.h"
#include "../block/unmapped/BlockSource.h"


class SlabBlockItem : BlockItem {

public:
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    ~SlabBlockItem();
    void _convertToDoubleSlab(BlockSource &, Level &, BlockPos const&, ItemStack &, Actor &, Block const&, ItemState const&, int)const;
    SlabBlockItem(std::string const&, int);
    void _trySetDoubleBlock(BlockSource &, Level &, BlockPos const&, Actor &, ItemStack &, Block const&, Block const*)const;
};
