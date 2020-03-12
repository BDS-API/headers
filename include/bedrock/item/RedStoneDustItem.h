#pragma once

#include <string>
#include "Item.h"
#include "../util/BlockPos.h"


class RedStoneDustItem : Item {

public:
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    ~RedStoneDustItem();
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const;
    RedStoneDustItem(std::string const&, int);
};
