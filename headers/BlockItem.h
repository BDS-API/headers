#pragma once

class BlockItem : Item {

public:
    virtual ~BlockItem();
    virtual bool isExperimental(ItemDescriptor const*)const;
    virtual bool isDestructive(int)const;
    virtual bool isValidAuxValue(int)const;
    virtual bool isEmissive(int)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void getIconYOffset(void)const;
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    void BlockItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
};
