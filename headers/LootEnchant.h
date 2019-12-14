#pragma once

class LootEnchant : Enchant {

public:
    virtual ~LootEnchant();
    virtual void getMinCost(int)const;
    virtual void getMaxCost(int)const;
    virtual void getMaxLevel(void)const;

    void LootEnchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, int);
};
