#pragma once

#include <string>
#include "Item.h"
#include "../util/BlockPos.h"


class DoorItem : Item {

public:
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    ~DoorItem();
//  DoorItem(std::string const&, int, DoorBlock::DoorType); //TODO: incomplete function definition
    void place(BlockSource *, int, int, int, int, Block const*);
};
