#pragma once

#include <string>
#include "Enchant.h"


class BowEnchant : Enchant {

public:
    virtual void getMaxCost(int)const;
    virtual void getMaxLevel()const;
    ~BowEnchant();
    virtual void getMinCost(int)const;
//  BowEnchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, int); //TODO: incomplete function definition
};
