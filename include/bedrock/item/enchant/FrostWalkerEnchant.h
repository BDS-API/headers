#pragma once

#include <string>
#include "Enchant.h"


class FrostWalkerEnchant : Enchant {

public:
    virtual bool isTreasureOnly()const;
    virtual void getMinCost(int)const;
    virtual void getMaxCost(int)const;
    virtual void getMaxLevel()const;
    ~FrostWalkerEnchant();
//  FrostWalkerEnchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, int); //TODO: incomplete function definition
};
