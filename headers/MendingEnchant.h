#pragma once

class MendingEnchant : Enchant {

public:
    virtual ~MendingEnchant();
    virtual void getMinCost(int)const;
    virtual void getMaxCost(int)const;
    virtual void getMaxLevel(void)const;
    virtual bool isTreasureOnly(void)const;

    void MendingEnchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, int);
};
