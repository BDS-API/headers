#pragma once

#include <string>
#include "Item.h"
#include "../util/BlockPos.h"


class MinecartItem : Item {

public:
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual bool isDestructive(int)const;
    ~MinecartItem();
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
//  MinecartItem(std::string const&, int, MinecartType); //TODO: incomplete function definition
};
