#pragma once

#include <string>
#include "Enchant.h"


class MendingEnchant : public Enchant {

public:
    virtual ~MendingEnchant(); // _ZN14MendingEnchantD2Ev
    virtual void __fake_function0(); // fake
    virtual void getMinCost(int)const; // _ZNK14MendingEnchant10getMinCostEi
    virtual void getMaxCost(int)const; // _ZNK14MendingEnchant10getMaxCostEi
    virtual void getMaxLevel()const; // _ZNK14MendingEnchant11getMaxLevelEv
    virtual bool isTreasureOnly()const; // _ZNK14MendingEnchant14isTreasureOnlyEv
//    MendingEnchant(long, long, std::string const&, std::string const&, int, int); //TODO: incomplete function definition // _ZN14MendingEnchantC2EN7Enchant4TypeENS0_9FrequencyERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESA_ii
};
