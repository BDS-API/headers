#pragma once

#include "../block/unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include "./Item.h"
#include "../actor/Actor.h"
#include "./ItemStack.h"
#include <string>


class ArmorStandItem : Item {

public:
    virtual ~ArmorStandItem();
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    ArmorStandItem(std::string const&, short);
    void _shouldRemove(BlockSource &, BlockPos)const;
};
