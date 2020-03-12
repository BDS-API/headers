#pragma once

#include "ItemStack.h"
#include <string>
#include "../util/BlockPos.h"
#include "../actor/Actor.h"
#include "BlockItem.h"


class TopSnowBlockItem : BlockItem {

public:
    ~TopSnowBlockItem();
    virtual void getLevelDataForAuxValue(int)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    TopSnowBlockItem(std::string const&, int);
};
