#pragma once

#include "ItemStack.h"
#include "../util/BlockPos.h"
#include <string>
#include "../actor/Actor.h"
#include "../../unmapped/Block.h"
#include "Item.h"
#include "../block/unmapped/BlockSource.h"


class DoorItem : Item {

public:
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    ~DoorItem();
    void place(BlockSource *, int, int, int, int, Block const*);
//  DoorItem(std::string const&, int, DoorBlock::DoorType); //TODO: incomplete function definition
};
