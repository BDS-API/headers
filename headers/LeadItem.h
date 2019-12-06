#pragma once

class LeadItem : Item {

public:
    virtual ~LeadItem();
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    void LeadItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
    void bindPlayerMobs(Actor &, int, int, int, ItemInstance *);
    bool canBindPlayerMobs(Actor const&, BlockPos const&);
};
