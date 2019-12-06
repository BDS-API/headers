#pragma once

class TridentChannelingEnchant : Enchant {

public:
    virtual ~TridentChannelingEnchant();
    virtual bool isCompatibleWith(Enchant::Type)const;
    virtual void getMinCost(int)const;
    virtual void getMaxCost(int)const;
    virtual void getMaxLevel(void)const;

    void TridentChannelingEnchant(Enchant::Type, Enchant::Frequency, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, bool, int);
};
