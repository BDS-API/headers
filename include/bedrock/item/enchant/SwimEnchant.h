#pragma once

#include "./Enchant.h"
#include <string>


class SwimEnchant : Enchant {

public:
    virtual ~SwimEnchant();
    virtual void getMinCost(int)const;
    virtual void getMaxCost(int)const;
    virtual void getMaxLevel()const;

//  SwimEnchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, int); //TODO: incomplete function definition
};
