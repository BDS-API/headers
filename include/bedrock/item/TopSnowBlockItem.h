#pragma once

#include <string>
#include "../util/BlockPos.h"
#include "BlockItem.h"


class TopSnowBlockItem : BlockItem {

public:
    virtual void getLevelDataForAuxValue(int)const;
    ~TopSnowBlockItem();
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    TopSnowBlockItem(std::string const&, int);
};
