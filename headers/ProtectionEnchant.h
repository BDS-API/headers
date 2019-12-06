#pragma once

class ProtectionEnchant : Enchant {

public:
    static long ProtectionEnchant::THORNS_CHANCE_PER_LEVEL;

    virtual ~ProtectionEnchant();
    virtual void getMinCost(int)const;
    virtual void getMaxCost(int)const;
    virtual void getMaxLevel(void)const;
    virtual void getDamageProtection(int, ActorDamageSource const&)const;
    virtual void doPostHurt(ItemInstance &, Actor &, Actor &, int)const;
    virtual bool isProtectionEnchant(void)const;

    void ProtectionEnchant(Enchant::Type, Enchant::Frequency, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, int);
    void getLevelCostSpanByType(void)const;
    void getThornsDamage(int)const;
};
