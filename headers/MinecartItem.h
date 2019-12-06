#pragma once

class MinecartItem : Item {

public:
    virtual ~MinecartItem();
    virtual bool isDestructive(int)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    void MinecartItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, MinecartType);
};
