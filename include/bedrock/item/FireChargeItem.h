#pragma once

#include "ItemStack.h"
#include "../util/BlockPos.h"
#include <string>
#include "../actor/Actor.h"
#include "../util/Vec3.h"
#include "../container/Container.h"
#include "Item.h"
#include "../block/unmapped/BlockSource.h"


class FireChargeItem : Item {

public:
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    ~FireChargeItem();
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const;
    FireChargeItem(std::string const&, int);
};
