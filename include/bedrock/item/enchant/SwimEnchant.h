#pragma once

#include <string>
#include "Enchant.h"


class SwimEnchant : Enchant {

public:
    ~SwimEnchant(); // _ZN11SwimEnchantD2Ev
    virtual void getMinCost(int)const; // _ZNK11SwimEnchant10getMinCostEi
    virtual void getMaxCost(int)const; // _ZNK11SwimEnchant10getMaxCostEi
    virtual void getMaxLevel()const; // _ZNK11SwimEnchant11getMaxLevelEv
//  SwimEnchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, int); //TODO: incomplete function definition // _ZN11SwimEnchantC2EN7Enchant4TypeENS0_9FrequencyERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESA_ii
};
