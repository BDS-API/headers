#pragma once

class SignItem : Item {

public:
    virtual ~SignItem();
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    void SignItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, SignBlockActor::SignType);
};
