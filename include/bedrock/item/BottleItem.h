#pragma once

#include "../block/unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include "./Item.h"
#include "../actor/Actor.h"
#include "../util/Vec3.h"
#include "./ItemStack.h"
#include "../container/Container.h"
#include <string>


class BottleItem : Item {

public:
    virtual ~BottleItem();
    virtual bool isLiquidClipItem(int)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    BottleItem(std::string const&, int);
    void _createBottledItem(Actor &, ItemStack &, Item const&)const;
    void _fillBottleViaDispenser(BlockSource &, Item const&, Container &, int, Vec3 const&, unsigned char)const;
};
