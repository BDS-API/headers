#pragma once

#include "../../unmapped/BlockSource"


class DoorItem : Item {

public:
    virtual DoorItem::~DoorItem();
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    DoorItem(std::string const&, int, DoorBlock::DoorType);
    void place(BlockSource *, int, int, int, int, Block const*);
};
