#pragma once

class ComplexItem : Item {

public:
    virtual ~ComplexItem();
    virtual bool isComplex(void)const;
    virtual void getUpdatePacket(ItemStack const&, Level &, Actor &)const;

    void ComplexItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
};
