#pragma once

#include <string>
#include "Item.h"
#include "../util/BlockPos.h"


class ArmorStandItem : Item {

public:
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    ~ArmorStandItem();
    void _shouldRemove(BlockSource &, BlockPos)const;
    ArmorStandItem(std::string const&, short);
};
