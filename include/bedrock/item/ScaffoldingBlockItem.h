#pragma once

#include "./BlockItem.h"
#include "../util/BlockPos.h"
#include "../actor/Actor.h"
#include "./ItemStack.h"
#include <string>


class ScaffoldingBlockItem : BlockItem {

public:
    virtual ~ScaffoldingBlockItem();
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    ScaffoldingBlockItem(std::string const&, int);
};
