#pragma once

#include "Enchant.h"
#include <string>


class DiggingEnchant : Enchant {

public:
    virtual void getMaxLevel()const;
    ~DiggingEnchant();
    virtual void getMinCost(int)const;
    virtual void getMaxCost(int)const;
//  DiggingEnchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, int); //TODO: incomplete function definition
};
