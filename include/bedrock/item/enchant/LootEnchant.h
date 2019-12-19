#pragma once

class LootEnchant : Enchant {

public:
    virtual LootEnchant::~LootEnchant();
    virtual void getMinCost(int)const;
    virtual void getMaxCost(int)const;
    virtual void getMaxLevel(void)const;

    LootEnchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, int);
};
