#pragma once

#include "ItemStack.h"
#include <string>
#include "../util/BlockPos.h"
#include "../actor/Actor.h"
#include "BlockItem.h"


class ScaffoldingBlockItem : BlockItem {

public:
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    ~ScaffoldingBlockItem();
    ScaffoldingBlockItem(std::string const&, int);
};
