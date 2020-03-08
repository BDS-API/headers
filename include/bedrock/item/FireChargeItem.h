#pragma once

#include "../block/unmapped/BlockSource"
#include "../actor/Actor"
#include "../util/BlockPos"
#include "../util/Vec3"
#include "../container/Container"


class FireChargeItem : Item {

public:
    virtual FireChargeItem::~FireChargeItem()
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    FireChargeItem(std::string const&, int);
};
