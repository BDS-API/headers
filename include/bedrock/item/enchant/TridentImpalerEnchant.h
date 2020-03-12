#pragma once

#include <string>
#include "Enchant.h"


class TridentImpalerEnchant : Enchant {

public:
    ~TridentImpalerEnchant();
    virtual void getDamageBonus(int, Actor const&)const;
    virtual void getMaxLevel()const;
    virtual void getMinCost(int)const;
    virtual void getMaxCost(int)const;
//  TridentImpalerEnchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, bool, int); //TODO: incomplete function definition
};
