#pragma once

class BottleItem : Item {

public:
    virtual ~BottleItem();
    virtual bool isLiquidClipItem(int)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    void BottleItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
    void _createBottledItem(Actor &, ItemStack &, Item const&)const;
};
