#pragma once

class SwimEnchant : Enchant {

public:
    virtual ~SwimEnchant();
    virtual void getMinCost(int)const;
    virtual void getMaxCost(int)const;
    virtual void getMaxLevel(void)const;

    void SwimEnchant(Enchant::Type, Enchant::Frequency, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, int);
};
