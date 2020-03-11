#pragma once

#include "../util/BlockPos.h"
#include "../actor/Actor.h"
#include "./SlabBlockItem.h"
#include "./ItemStack.h"
#include <string>


class WoodSlabBlockItem : SlabBlockItem {

public:
    virtual ~WoodSlabBlockItem();
    virtual void getLevelDataForAuxValue(int)const;
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const;

    WoodSlabBlockItem(std::string const&, int);
};
