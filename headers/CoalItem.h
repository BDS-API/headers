#pragma once

class CoalItem : Item {

public:
    virtual ~CoalItem();
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void setIcon(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);

    void CoalItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
    bool isCharcoal(ItemInstance const&);
};
