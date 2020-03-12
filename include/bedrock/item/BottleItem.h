#pragma once

#include "ItemStack.h"
#include "../util/BlockPos.h"
#include <string>
#include "../actor/Actor.h"
#include "../util/Vec3.h"
#include "../container/Container.h"
#include "Item.h"
#include "../block/unmapped/BlockSource.h"


class BottleItem : Item {

public:
    virtual bool isLiquidClipItem(int)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    ~BottleItem();
    void _createBottledItem(Actor &, ItemStack &, Item const&)const;
    BottleItem(std::string const&, int);
    void _fillBottleViaDispenser(BlockSource &, Item const&, Container &, int, Vec3 const&, unsigned char)const;
};
