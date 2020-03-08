#pragma once



class BowEnchant : Enchant {

public:
    virtual BowEnchant::~BowEnchant()
    virtual void getMinCost(int)const;
    virtual void getMaxCost(int)const;
    virtual void getMaxLevel()const;

    BowEnchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, int);
};
