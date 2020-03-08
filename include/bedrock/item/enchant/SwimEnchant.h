#pragma once



class SwimEnchant : Enchant {

public:
    virtual SwimEnchant::~SwimEnchant()
    virtual void getMinCost(int)const;
    virtual void getMaxCost(int)const;
    virtual void getMaxLevel()const;

    SwimEnchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, int);
};
