#pragma once

class BambooBlockItem : BlockItem {

public:
    virtual ~BambooBlockItem();
    virtual void getLevelDataForAuxValue(int)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    void BambooBlockItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
};
