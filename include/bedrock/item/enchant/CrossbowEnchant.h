#pragma once



class CrossbowEnchant : Enchant {

public:
    virtual CrossbowEnchant::~CrossbowEnchant()
    virtual bool isCompatibleWith(Enchant::Type)const;
    virtual void getMinCost(int)const;
    virtual void getMaxCost(int)const;
    virtual void getMaxLevel()const;

    CrossbowEnchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, bool, int);
};
