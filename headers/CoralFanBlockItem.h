#pragma once

class CoralFanBlockItem : BlockItem {

public:
    virtual ~CoralFanBlockItem();
    virtual void getLevelDataForAuxValue(int)const;
    virtual bool isValidAuxValue(int)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    void CoralFanBlockItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
};
