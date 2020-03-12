#pragma once

#include "ItemStack.h"
#include <string>
#include "../util/BlockPos.h"
#include "../actor/Actor.h"
#include "BlockItem.h"


class SeaPickleBlockItem : BlockItem {

public:
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    ~SeaPickleBlockItem();
    virtual void getLevelDataForAuxValue(int)const;
    SeaPickleBlockItem(std::string const&, int);
};
