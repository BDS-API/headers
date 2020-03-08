#pragma once



class DiggingEnchant : Enchant {

public:
    virtual DiggingEnchant::~DiggingEnchant()
    virtual void getMinCost(int)const;
    virtual void getMaxCost(int)const;
    virtual void getMaxLevel()const;

    DiggingEnchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, int);
};
