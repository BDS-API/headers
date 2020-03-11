#pragma once

#include <string>
#include "./Enchant.h"
#include "../../actor/Actor.h"


class TridentImpalerEnchant : Enchant {

public:
    virtual ~TridentImpalerEnchant();
    virtual void getMinCost(int)const;
    virtual void getMaxCost(int)const;
    virtual void getMaxLevel()const;
    virtual void getDamageBonus(int, Actor const&)const;

//  TridentImpalerEnchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, bool, int); //TODO: incomplete function definition
};
