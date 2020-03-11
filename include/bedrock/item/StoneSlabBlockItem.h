#pragma once

#include "../util/BlockPos.h"
#include "../actor/Actor.h"
#include "./SlabBlockItem.h"
#include "./ItemStack.h"
#include <string>


class StoneSlabBlockItem : SlabBlockItem {

public:
    virtual ~StoneSlabBlockItem();
    virtual void getLevelDataForAuxValue(int)const;
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const;

    StoneSlabBlockItem(std::string const&, int);
};
