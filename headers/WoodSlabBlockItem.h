#pragma once

class WoodSlabBlockItem : SlabBlockItem {

public:
    virtual ~WoodSlabBlockItem();
    virtual void getLevelDataForAuxValue(int)const;
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const;

    void WoodSlabBlockItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
};
