#pragma once

#include "../container/Container"
#include "../actor/Actor"
#include "../util/Vec3"
#include "../block/unmapped/BlockSource"
#include "../util/BlockPos"


class FertilizerItem : Item {

public:
    FertilizerItem::~FertilizerItem()
    virtual bool isFertilizer(int)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    FertilizerItem(std::string const&, int, FertilizerType);
};
