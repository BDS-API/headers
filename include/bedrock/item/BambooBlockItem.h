#pragma once

#include "ItemStack.h"
#include <string>
#include "../util/BlockPos.h"
#include "../actor/Actor.h"
#include "BlockItem.h"


class BambooBlockItem : BlockItem {

public:
    ~BambooBlockItem();
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    virtual void getLevelDataForAuxValue(int)const;
    BambooBlockItem(std::string const&, int);
};
