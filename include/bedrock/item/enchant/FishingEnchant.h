#pragma once



class FishingEnchant : Enchant {

public:
    virtual FishingEnchant::~FishingEnchant()
    virtual void getMinCost(int)const;
    virtual void getMaxCost(int)const;
    virtual void getMaxLevel()const;

    FishingEnchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, int);
};
