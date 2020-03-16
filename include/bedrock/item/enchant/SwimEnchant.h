#pragma once

#include <string>
#include "Enchant.h"


class SwimEnchant : public Enchant {

public:
    virtual ~SwimEnchant(); // _ZN11SwimEnchantD2Ev
    virtual void __fake_function0(); // fake
    virtual void getMinCost(int)const; // _ZNK11SwimEnchant10getMinCostEi
    virtual void getMaxCost(int)const; // _ZNK11SwimEnchant10getMaxCostEi
    virtual void getMaxLevel()const; // _ZNK11SwimEnchant11getMaxLevelEv
//    SwimEnchant(long, long, std::string const&, std::string const&, int, int); //TODO: incomplete function definition // _ZN11SwimEnchantC2EN7Enchant4TypeENS0_9FrequencyERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESA_ii
};
