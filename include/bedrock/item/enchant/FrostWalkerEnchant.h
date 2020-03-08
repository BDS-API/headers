#pragma once



class FrostWalkerEnchant : Enchant {

public:
    virtual FrostWalkerEnchant::~FrostWalkerEnchant();
    virtual void getMinCost(int)const;
    virtual void getMaxCost(int)const;
    virtual void getMaxLevel(void)const;
    virtual bool isTreasureOnly(void)const;

    FrostWalkerEnchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, int);
};
