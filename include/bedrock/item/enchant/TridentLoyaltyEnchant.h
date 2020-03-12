#pragma once

#include "Enchant.h"
#include <string>


class TridentLoyaltyEnchant : Enchant {

public:
    virtual void getMaxLevel()const;
    virtual void getMinCost(int)const;
    ~TridentLoyaltyEnchant();
    virtual void getMaxCost(int)const;
//  TridentLoyaltyEnchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, bool, int); //TODO: incomplete function definition
};
