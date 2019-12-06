#pragma once

class ArmorStandItem : Item {

public:
    virtual ~ArmorStandItem();
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    void ArmorStandItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, short);
    void _shouldRemove(BlockSource &, BlockPos)const;
};
