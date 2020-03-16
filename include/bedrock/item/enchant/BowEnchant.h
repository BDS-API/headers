#pragma once

#include <string>
#include "Enchant.h"


class BowEnchant : public Enchant {

public:
    virtual ~BowEnchant(); // _ZN10BowEnchantD2Ev
    virtual void __fake_function0(); // fake
    virtual void getMinCost(int)const; // _ZNK10BowEnchant10getMinCostEi
    virtual void getMaxCost(int)const; // _ZNK10BowEnchant10getMaxCostEi
    virtual void getMaxLevel()const; // _ZNK10BowEnchant11getMaxLevelEv
//    BowEnchant(long, long, std::string const&, std::string const&, int, int); //TODO: incomplete function definition // _ZN10BowEnchantC2EN7Enchant4TypeENS0_9FrequencyERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESA_ii
};
