#pragma once

#include <string>
#include "Item.h"
#include "../util/BlockPos.h"


class LeadItem : Item {

public:
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    ~LeadItem();
    void bindPlayerMobs(Actor &, int, int, int, ItemInstance *);
    bool canBindPlayerMobs(Actor const&, BlockPos const&);
    LeadItem(std::string const&, int);
};
