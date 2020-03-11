#pragma once

#include "../block/unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include "./Item.h"
#include "../actor/Actor.h"
#include "../util/Vec3.h"
#include "./ItemStack.h"
#include "../container/Container.h"
#include <string>


class FertilizerItem : Item {

public:
    virtual ~FertilizerItem();
    virtual bool isFertilizer(int)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

//  FertilizerItem(std::string const&, int, FertilizerType); //TODO: incomplete function definition
};
