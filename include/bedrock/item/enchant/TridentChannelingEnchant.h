#pragma once



class TridentChannelingEnchant : Enchant {

public:
    virtual TridentChannelingEnchant::~TridentChannelingEnchant()
    virtual bool isCompatibleWith(Enchant::Type)const;
    virtual void getMinCost(int)const;
    virtual void getMaxCost(int)const;
    virtual void getMaxLevel()const;

    TridentChannelingEnchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, bool, int);
};
