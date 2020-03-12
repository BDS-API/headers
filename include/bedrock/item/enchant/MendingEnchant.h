#pragma once

#include "Enchant.h"
#include <string>


class MendingEnchant : Enchant {

public:
    virtual bool isTreasureOnly()const;
    virtual void getMinCost(int)const;
    ~MendingEnchant();
    virtual void getMaxLevel()const;
    virtual void getMaxCost(int)const;
//  MendingEnchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, int); //TODO: incomplete function definition
};
