#pragma once

#include <string>
#include "Enchant.h"


class FrostWalkerEnchant : Enchant {

public:
    ~FrostWalkerEnchant(); // _ZN18FrostWalkerEnchantD2Ev
    virtual void getMinCost(int)const; // _ZNK18FrostWalkerEnchant10getMinCostEi
    virtual void getMaxCost(int)const; // _ZNK18FrostWalkerEnchant10getMaxCostEi
    virtual void getMaxLevel()const; // _ZNK18FrostWalkerEnchant11getMaxLevelEv
    virtual bool isTreasureOnly()const; // _ZNK18FrostWalkerEnchant14isTreasureOnlyEv
//  FrostWalkerEnchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, int); //TODO: incomplete function definition // _ZN18FrostWalkerEnchantC2EN7Enchant4TypeENS0_9FrequencyERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESA_ii
};
