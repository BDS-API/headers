#pragma once

#include "Enchant.h"
#include <string>


class FishingEnchant : Enchant {

public:
    virtual void getMaxLevel()const;
    virtual void getMaxCost(int)const;
    ~FishingEnchant();
    virtual void getMinCost(int)const;
//  FishingEnchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, int); //TODO: incomplete function definition
};
