#pragma once

#include "./Enchant.h"
#include <string>


class TridentLoyaltyEnchant : Enchant {

public:
    virtual ~TridentLoyaltyEnchant();
    virtual void getMinCost(int)const;
    virtual void getMaxCost(int)const;
    virtual void getMaxLevel()const;

//  TridentLoyaltyEnchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, bool, int); //TODO: incomplete function definition
};
