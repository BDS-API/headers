#pragma once

class BowEnchant : Enchant {

public:
    virtual ~BowEnchant();
    virtual void getMinCost(int)const;
    virtual void getMaxCost(int)const;
    virtual void getMaxLevel(void)const;

    void BowEnchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, int);
};
