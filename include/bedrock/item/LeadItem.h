#pragma once

#include "ItemStack.h"
#include "../util/BlockPos.h"
#include <string>
#include "../actor/Actor.h"
#include "ItemInstance.h"
#include "Item.h"


class LeadItem : Item {

public:
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    ~LeadItem();
    void bindPlayerMobs(Actor &, int, int, int, ItemInstance *);
    LeadItem(std::string const&, int);
    bool canBindPlayerMobs(Actor const&, BlockPos const&);
};
