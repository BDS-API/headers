#pragma once



class TridentRiptideEnchant : Enchant {

public:
    virtual TridentRiptideEnchant::~TridentRiptideEnchant()
    virtual bool isCompatibleWith(Enchant::Type)const;
    virtual void getMinCost(int)const;
    virtual void getMaxCost(int)const;
    virtual void getMaxLevel()const;

    TridentRiptideEnchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, bool, int);
};
