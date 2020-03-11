#pragma once

#include "../block/unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include "./Item.h"
#include "../actor/Actor.h"
#include "../util/Vec3.h"
#include "./ItemStack.h"
#include "../container/Container.h"
#include <string>


class MinecartItem : Item {

public:
    virtual ~MinecartItem();
    virtual bool isDestructive(int)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

//  MinecartItem(std::string const&, int, MinecartType); //TODO: incomplete function definition
};
