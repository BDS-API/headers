#pragma once

#include "SlabBlockItem.h"
#include "ItemStack.h"
#include <string>
#include "../util/BlockPos.h"
#include "../actor/Actor.h"


class WoodSlabBlockItem : SlabBlockItem {

public:
    ~WoodSlabBlockItem();
    virtual void getLevelDataForAuxValue(int)const;
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const;
    WoodSlabBlockItem(std::string const&, int);
};
