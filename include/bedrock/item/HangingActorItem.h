#pragma once

#include "../actor/Actor"
#include "../util/BlockPos"


class HangingActorItem : Item {

public:
    virtual HangingActorItem::~HangingActorItem()
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    HangingActorItem(std::string const&, int, ActorType);
};
