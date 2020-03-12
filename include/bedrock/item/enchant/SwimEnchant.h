#pragma once

#include <string>
#include "Enchant.h"


class SwimEnchant : Enchant {

public:
    virtual void getMinCost(int)const;
    virtual void getMaxLevel()const;
    ~SwimEnchant();
    virtual void getMaxCost(int)const;
//  SwimEnchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, int); //TODO: incomplete function definition
};
