#pragma once

#include "./Enchant.h"
#include <string>


class FishingEnchant : Enchant {

public:
    virtual ~FishingEnchant();
    virtual void getMinCost(int)const;
    virtual void getMaxCost(int)const;
    virtual void getMaxLevel()const;

//  FishingEnchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, int); //TODO: incomplete function definition
};
