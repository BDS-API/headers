#pragma once

#include <string>
#include "Enchant.h"


class FishingEnchant : Enchant {

public:
    virtual void getMaxLevel()const;
    ~FishingEnchant();
    virtual void getMaxCost(int)const;
    virtual void getMinCost(int)const;
//  FishingEnchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, int); //TODO: incomplete function definition
};
