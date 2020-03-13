#pragma once

#include <string>
#include "Enchant.h"


class FishingEnchant : Enchant {

public:
    ~FishingEnchant(); // _ZN14FishingEnchantD2Ev
    virtual void getMinCost(int)const; // _ZNK14FishingEnchant10getMinCostEi
    virtual void getMaxCost(int)const; // _ZNK14FishingEnchant10getMaxCostEi
    virtual void getMaxLevel()const; // _ZNK14FishingEnchant11getMaxLevelEv
//  FishingEnchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, int); //TODO: incomplete function definition // _ZN14FishingEnchantC2EN7Enchant4TypeENS0_9FrequencyERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESA_ii
};
