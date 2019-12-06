#pragma once

class TridentImpalerEnchant : Enchant {

public:
    virtual ~TridentImpalerEnchant();
    virtual void getMinCost(int)const;
    virtual void getMaxCost(int)const;
    virtual void getMaxLevel(void)const;
    virtual void getDamageBonus(int, Actor const&)const;

    void TridentImpalerEnchant(Enchant::Type, Enchant::Frequency, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, bool, int);
};
