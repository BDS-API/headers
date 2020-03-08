#pragma once

#include "../block/unmapped/BlockSource"
#include "../actor/Actor"
#include "../util/BlockPos"
#include "../util/Vec3"
#include "../container/Container"


class FertilizerItem : Item {

public:
    virtual FertilizerItem::~FertilizerItem()
    virtual bool isFertilizer(int)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    FertilizerItem(std::string const&, int, FertilizerType);
};
