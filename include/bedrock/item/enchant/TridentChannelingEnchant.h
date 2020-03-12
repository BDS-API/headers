#pragma once

#include <string>
#include "Enchant.h"


class TridentChannelingEnchant : Enchant {

public:
    virtual void getMaxCost(int)const;
    ~TridentChannelingEnchant();
//  virtual bool isCompatibleWith(Enchant::Type)const; //TODO: incomplete function definition
    virtual void getMinCost(int)const;
    virtual void getMaxLevel()const;
//  TridentChannelingEnchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, bool, int); //TODO: incomplete function definition
};
