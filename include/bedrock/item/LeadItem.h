#pragma once

#include "./ItemInstance.h"
#include "../util/BlockPos.h"
#include "./Item.h"
#include "../actor/Actor.h"
#include "./ItemStack.h"
#include <string>


class LeadItem : Item {

public:
    virtual ~LeadItem();
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    LeadItem(std::string const&, int);
    void bindPlayerMobs(Actor &, int, int, int, ItemInstance *);
    bool canBindPlayerMobs(Actor const&, BlockPos const&);
};
