#pragma once

#include "../actor/Actor"
#include "../block/unmapped/BlockSource"
#include "../util/BlockPos"
#include "../../unmapped/Block"


class DoorItem : Item {

public:
    DoorItem::~DoorItem()
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    DoorItem(std::string const&, int, DoorBlock::DoorType);
    void place(BlockSource *, int, int, int, int, Block const*);
};
