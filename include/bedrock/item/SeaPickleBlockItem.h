#pragma once

#include "./BlockItem.h"
#include "../util/BlockPos.h"
#include "../actor/Actor.h"
#include "./ItemStack.h"
#include <string>


class SeaPickleBlockItem : BlockItem {

public:
    virtual ~SeaPickleBlockItem();
    virtual void getLevelDataForAuxValue(int)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    SeaPickleBlockItem(std::string const&, int);
};
