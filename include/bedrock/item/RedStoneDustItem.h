#pragma once

#include <string>
#include "ItemStack.h"
#include "../util/BlockPos.h"
#include "../actor/Actor.h"
#include "Item.h"


class RedStoneDustItem : Item {

public:
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const;
    ~RedStoneDustItem();
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    RedStoneDustItem(std::string const&, int);
};
