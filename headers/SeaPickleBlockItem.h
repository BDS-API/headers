#pragma once

class SeaPickleBlockItem : BlockItem {

public:
    virtual ~SeaPickleBlockItem();
    virtual void getLevelDataForAuxValue(int)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    void SeaPickleBlockItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
};
