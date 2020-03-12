#pragma once

#include <string>
#include "Enchant.h"


class MendingEnchant : Enchant {

public:
    virtual void getMaxLevel()const;
    ~MendingEnchant();
    virtual void getMaxCost(int)const;
    virtual bool isTreasureOnly()const;
    virtual void getMinCost(int)const;
//  MendingEnchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, int); //TODO: incomplete function definition
};
