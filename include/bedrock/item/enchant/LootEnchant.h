#pragma once

#include "./Enchant.h"
#include <string>


class LootEnchant : Enchant {

public:
    virtual ~LootEnchant();
    virtual void getMinCost(int)const;
    virtual void getMaxCost(int)const;
    virtual void getMaxLevel()const;

//  LootEnchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, int); //TODO: incomplete function definition
};
