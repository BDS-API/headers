#pragma once

class MeleeWeaponEnchant : Enchant {

public:
    virtual ~MeleeWeaponEnchant();
    virtual void getMinCost(int)const;
    virtual void getMaxCost(int)const;
    virtual void getMaxLevel(void)const;
    virtual void getDamageBonus(int, Actor const&)const;
    virtual void doPostAttack(Actor &, Actor &, int)const;
    virtual bool isMeleeDamageEnchant(void)const;

    void MeleeWeaponEnchant(Enchant::Type, Enchant::Frequency, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, int);
};
