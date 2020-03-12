#pragma once

#include <string>
#include "../util/BlockPos.h"
#include "BlockItem.h"


class ScaffoldingBlockItem : BlockItem {

public:
    ~ScaffoldingBlockItem();
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    ScaffoldingBlockItem(std::string const&, int);
};
