#pragma once

#include <string>
#include "ItemStack.h"
#include "../util/BlockPos.h"
#include "../actor/Actor.h"
#include "Item.h"


class HangingActorItem : Item {

public:
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    ~HangingActorItem();
//  HangingActorItem(std::string const&, int, ActorType); //TODO: incomplete function definition
};
