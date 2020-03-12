#pragma once

#include <string>
#include "Enchant.h"


class CrossbowEnchant : Enchant {

public:
//  virtual bool isCompatibleWith(Enchant::Type)const; //TODO: incomplete function definition
    virtual void getMinCost(int)const;
    virtual void getMaxLevel()const;
    ~CrossbowEnchant();
    virtual void getMaxCost(int)const;
//  CrossbowEnchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, bool, int); //TODO: incomplete function definition
};
