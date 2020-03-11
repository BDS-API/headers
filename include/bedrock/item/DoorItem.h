#pragma once

#include "../block/unmapped/BlockSource.h"
#include <string>
#include "../util/BlockPos.h"
#include "./Item.h"
#include "../actor/Actor.h"
#include "./ItemStack.h"
#include "../../unmapped/Block.h"


class DoorItem : Item {

public:
    virtual ~DoorItem();
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

//  DoorItem(std::string const&, int, DoorBlock::DoorType); //TODO: incomplete function definition
    void place(BlockSource *, int, int, int, int, Block const*);
};
