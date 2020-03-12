#pragma once

#include <string>
#include "Enchant.h"


class TridentLoyaltyEnchant : Enchant {

public:
    virtual void getMinCost(int)const;
    virtual void getMaxLevel()const;
    ~TridentLoyaltyEnchant();
    virtual void getMaxCost(int)const;
//  TridentLoyaltyEnchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, bool, int); //TODO: incomplete function definition
};
