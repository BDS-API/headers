#pragma once

#include <string>
#include "Enchant.h"


class TridentRiptideEnchant : Enchant {

public:
    virtual void getMinCost(int)const;
    ~TridentRiptideEnchant();
    virtual void getMaxCost(int)const;
    virtual void getMaxLevel()const;
//  virtual bool isCompatibleWith(Enchant::Type)const; //TODO: incomplete function definition
//  TridentRiptideEnchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, bool, int); //TODO: incomplete function definition
};
