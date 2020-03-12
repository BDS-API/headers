#pragma once

#include <string>
#include "Enchant.h"


class LootEnchant : Enchant {

public:
    virtual void getMaxCost(int)const;
    virtual void getMaxLevel()const;
    ~LootEnchant();
    virtual void getMinCost(int)const;
//  LootEnchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, int); //TODO: incomplete function definition
};
