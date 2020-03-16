#pragma once

#include <string>
#include "Enchant.h"


class TridentLoyaltyEnchant : public Enchant {

public:
    virtual ~TridentLoyaltyEnchant(); // _ZN21TridentLoyaltyEnchantD2Ev
    virtual void __fake_function0(); // fake
    virtual void getMinCost(int)const; // _ZNK21TridentLoyaltyEnchant10getMinCostEi
    virtual void getMaxCost(int)const; // _ZNK21TridentLoyaltyEnchant10getMaxCostEi
    virtual void getMaxLevel()const; // _ZNK21TridentLoyaltyEnchant11getMaxLevelEv
//    TridentLoyaltyEnchant(long, long, std::string const&, std::string const&, int, bool, int); //TODO: incomplete function definition // _ZN21TridentLoyaltyEnchantC2EN7Enchant4TypeENS0_9FrequencyERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESA_ibi
};
