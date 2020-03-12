#pragma once

#include <string>
#include "Item.h"
#include "../util/BlockPos.h"


class HangingActorItem : Item {

public:
    ~HangingActorItem();
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
//  HangingActorItem(std::string const&, int, ActorType); //TODO: incomplete function definition
};
