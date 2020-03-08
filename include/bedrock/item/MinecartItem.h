#pragma once

#include "../container/Container"
#include "../actor/Actor"
#include "../util/Vec3"
#include "../block/unmapped/BlockSource"
#include "../util/BlockPos"


class MinecartItem : Item {

public:
    MinecartItem::~MinecartItem()
    virtual bool isDestructive(int)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    MinecartItem(std::string const&, int, MinecartType);
};
