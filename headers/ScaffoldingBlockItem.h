#pragma once

class ScaffoldingBlockItem : BlockItem {

public:
    virtual ~ScaffoldingBlockItem();
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    void ScaffoldingBlockItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
};
