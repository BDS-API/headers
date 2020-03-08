#pragma once

#include "../../actor/Actor"


class TridentImpalerEnchant : Enchant {

public:
    virtual TridentImpalerEnchant::~TridentImpalerEnchant()
    virtual void getMinCost(int)const;
    virtual void getMaxCost(int)const;
    virtual void getMaxLevel()const;
    virtual void getDamageBonus(int, Actor const&)const;

    TridentImpalerEnchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, bool, int);
};
