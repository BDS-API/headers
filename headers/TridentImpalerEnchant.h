#pragma once

class TridentImpalerEnchant : Enchant {

public:
    virtual ~TridentImpalerEnchant();
    virtual void getMinCost(int)const;
    virtual void getMaxCost(int)const;
    virtual void getMaxLevel(void)const;
    virtual void getDamageBonus(int, Actor const&)const;

    void TridentImpalerEnchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, bool, int);
};
