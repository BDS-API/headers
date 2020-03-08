#pragma once

#include "../actor/Actor"
#include "../util/BlockPos"


class LeadItem : Item {

public:
    virtual LeadItem::~LeadItem()
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    LeadItem(std::string const&, int);
    void bindPlayerMobs(Actor &, int, int, int, ItemInstance *);
    bool canBindPlayerMobs(Actor const&, BlockPos const&);
};
