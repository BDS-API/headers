#pragma once

class WaterLilyBlockItem : BlockItem {

public:
    virtual ~WaterLilyBlockItem();
    virtual bool isLiquidClipItem(int)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    void WaterLilyBlockItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
};
