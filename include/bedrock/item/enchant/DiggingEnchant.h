#pragma once

#include <string>
#include "Enchant.h"


class DiggingEnchant : public Enchant {

public:
    virtual ~DiggingEnchant(); // _ZN14DiggingEnchantD2Ev
    virtual void __fake_function0(); // fake
    virtual void getMinCost(int)const; // _ZNK14DiggingEnchant10getMinCostEi
    virtual void getMaxCost(int)const; // _ZNK14DiggingEnchant10getMaxCostEi
    virtual void getMaxLevel()const; // _ZNK14DiggingEnchant11getMaxLevelEv
//    DiggingEnchant(long, long, std::string const&, std::string const&, int, int); //TODO: incomplete function definition // _ZN14DiggingEnchantC2EN7Enchant4TypeENS0_9FrequencyERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESA_ii
};
