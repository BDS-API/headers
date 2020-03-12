#pragma once

#include "../../actor/Actor.h"
#include "Enchant.h"
#include <string>


class TridentImpalerEnchant : Enchant {

public:
    virtual void getMinCost(int)const;
    virtual void getDamageBonus(int, Actor const&)const;
    ~TridentImpalerEnchant();
    virtual void getMaxCost(int)const;
    virtual void getMaxLevel()const;
//  TridentImpalerEnchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, bool, int); //TODO: incomplete function definition
};
