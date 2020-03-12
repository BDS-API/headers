#pragma once

#include "Enchant.h"
#include <string>


class TridentChannelingEnchant : Enchant {

public:
    virtual void getMaxCost(int)const;
    ~TridentChannelingEnchant();
//  virtual bool isCompatibleWith(Enchant::Type)const; //TODO: incomplete function definition
    virtual void getMaxLevel()const;
    virtual void getMinCost(int)const;
//  TridentChannelingEnchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, bool, int); //TODO: incomplete function definition
};
