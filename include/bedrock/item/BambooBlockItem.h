#pragma once

#include <string>
#include "../util/BlockPos.h"
#include "BlockItem.h"


class BambooBlockItem : BlockItem {

public:
    virtual void getLevelDataForAuxValue(int)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    ~BambooBlockItem();
    BambooBlockItem(std::string const&, int);
};
