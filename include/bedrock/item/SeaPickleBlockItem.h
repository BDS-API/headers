#pragma once

#include <string>
#include "../util/BlockPos.h"
#include "BlockItem.h"


class SeaPickleBlockItem : BlockItem {

public:
    ~SeaPickleBlockItem();
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    virtual void getLevelDataForAuxValue(int)const;
    SeaPickleBlockItem(std::string const&, int);
};
