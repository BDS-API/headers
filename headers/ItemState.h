#pragma once

class ItemState {

public:

    virtual ~ItemState();

    void getID(void)const;
    void getVariationCount(void)const;
    void forEachState(std::function<bool ()(ItemState const&)>);
    void ItemState(unsigned long, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, unsigned long);
};
