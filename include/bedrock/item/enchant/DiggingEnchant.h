#pragma once

#include <string>
#include "Enchant.h"


class DiggingEnchant : Enchant {

public:
    virtual void getMaxLevel()const;
    virtual void getMinCost(int)const;
    ~DiggingEnchant();
    virtual void getMaxCost(int)const;
//  DiggingEnchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, int); //TODO: incomplete function definition
};
