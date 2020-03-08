#pragma once

#include "../block/unmapped/BlockSource"
#include "../actor/Actor"
#include "../util/BlockPos"


class ArmorStandItem : Item {

public:
    virtual ArmorStandItem::~ArmorStandItem()
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    ArmorStandItem(std::string const&, short);
    void _shouldRemove(BlockSource &, BlockPos)const;
};
