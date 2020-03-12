#pragma once

#include <string>
#include "../util/BlockPos.h"
#include "BlockItem.h"


class BellBlockItem : BlockItem {

public:
    ~BellBlockItem();
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    BellBlockItem(std::string const&, int);
};
