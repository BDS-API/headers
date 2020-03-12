#pragma once

#include "ItemStack.h"
#include "../util/BlockPos.h"
#include <string>
#include "../actor/Actor.h"
#include "Item.h"
#include "../block/unmapped/BlockSource.h"


class ArmorStandItem : Item {

public:
    ~ArmorStandItem();
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    ArmorStandItem(std::string const&, short);
    void _shouldRemove(BlockSource &, BlockPos)const;
};
