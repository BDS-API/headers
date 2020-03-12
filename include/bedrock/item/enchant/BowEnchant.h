#pragma once

#include "Enchant.h"
#include <string>


class BowEnchant : Enchant {

public:
    virtual void getMaxLevel()const;
    virtual void getMinCost(int)const;
    virtual void getMaxCost(int)const;
    ~BowEnchant();
//  BowEnchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, int); //TODO: incomplete function definition
};
