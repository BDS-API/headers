#pragma once

#include "ItemStack.h"
#include "../util/BlockPos.h"
#include <string>
#include "../actor/Actor.h"
#include "../util/Vec3.h"
#include "../container/Container.h"
#include "Item.h"
#include "../block/unmapped/BlockSource.h"


class FertilizerItem : Item {

public:
    ~FertilizerItem();
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    virtual bool isFertilizer(int)const;
//  FertilizerItem(std::string const&, int, FertilizerType); //TODO: incomplete function definition
};
