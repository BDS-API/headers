#pragma once

#include <string>
#include "Item.h"
#include "../util/BlockPos.h"


class FertilizerItem : Item {

public:
    virtual bool isFertilizer(int)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    ~FertilizerItem();
//  FertilizerItem(std::string const&, int, FertilizerType); //TODO: incomplete function definition
};
