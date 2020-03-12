#pragma once

#include "SlabBlockItem.h"
#include "ItemStack.h"
#include <string>
#include "../util/BlockPos.h"
#include "../actor/Actor.h"


class StoneSlabBlockItem : SlabBlockItem {

public:
    ~StoneSlabBlockItem();
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const;
    virtual void getLevelDataForAuxValue(int)const;
    StoneSlabBlockItem(std::string const&, int);
};
