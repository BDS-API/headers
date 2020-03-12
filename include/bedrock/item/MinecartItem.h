#pragma once

#include "ItemStack.h"
#include "../util/BlockPos.h"
#include <string>
#include "../actor/Actor.h"
#include "../util/Vec3.h"
#include "../container/Container.h"
#include "Item.h"
#include "../block/unmapped/BlockSource.h"


class MinecartItem : Item {

public:
    ~MinecartItem();
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual bool isDestructive(int)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
//  MinecartItem(std::string const&, int, MinecartType); //TODO: incomplete function definition
};
