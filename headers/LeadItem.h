#pragma once

class LeadItem : Item {

public:
    virtual ~LeadItem();
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    void LeadItem(std::string const&, int);
    void bindPlayerMobs(Actor &, int, int, int, ItemInstance *);
    bool canBindPlayerMobs(Actor const&, BlockPos const&);
};
