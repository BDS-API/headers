#pragma once

#include <string>
#include "Enchant.h"


class LootEnchant : Enchant {

public:
    ~LootEnchant(); // _ZN11LootEnchantD2Ev
    virtual void getMinCost(int)const; // _ZNK11LootEnchant10getMinCostEi
    virtual void getMaxCost(int)const; // _ZNK11LootEnchant10getMaxCostEi
    virtual void getMaxLevel()const; // _ZNK11LootEnchant11getMaxLevelEv
//  LootEnchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, int); //TODO: incomplete function definition // _ZN11LootEnchantC2EN7Enchant4TypeENS0_9FrequencyERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESA_ii
};
