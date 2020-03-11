#pragma once

#include "./BlockItem.h"
#include "../block/unmapped/BlockSource.h"
#include <string>
#include "../util/BlockPos.h"
#include "../level/Level.h"
#include "unmapped/ItemState.h"
#include "../actor/Actor.h"
#include "./ItemStack.h"
#include "../../unmapped/Block.h"


class SlabBlockItem : BlockItem {

public:
    virtual ~SlabBlockItem();
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    SlabBlockItem(std::string const&, int);
    void _trySetDoubleBlock(BlockSource &, Level &, BlockPos const&, Actor &, ItemStack &, Block const&, Block const*)const;
    void _convertToDoubleSlab(BlockSource &, Level &, BlockPos const&, ItemStack &, Actor &, Block const&, ItemState const&, int)const;
};
