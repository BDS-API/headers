#pragma once

#include <string>
#include "Item.h"
#include "../util/BlockPos.h"


class FireChargeItem : Item {

public:
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    ~FireChargeItem();
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const;
    FireChargeItem(std::string const&, int);
};
