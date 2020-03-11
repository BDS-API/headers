#pragma once

#include "../util/BlockPos.h"
#include "./Item.h"
#include "../actor/Actor.h"
#include "./ItemStack.h"
#include <string>


class HangingActorItem : Item {

public:
    virtual ~HangingActorItem();
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

//  HangingActorItem(std::string const&, int, ActorType); //TODO: incomplete function definition
};
