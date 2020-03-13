#pragma once

#include <string>
#include "Enchant.h"


class CrossbowEnchant : Enchant {

public:
    ~CrossbowEnchant(); // _ZN15CrossbowEnchantD2Ev
//  virtual bool isCompatibleWith(Enchant::Type)const; //TODO: incomplete function definition // _ZNK15CrossbowEnchant16isCompatibleWithEN7Enchant4TypeE
    virtual void getMinCost(int)const; // _ZNK15CrossbowEnchant10getMinCostEi
    virtual void getMaxCost(int)const; // _ZNK15CrossbowEnchant10getMaxCostEi
    virtual void getMaxLevel()const; // _ZNK15CrossbowEnchant11getMaxLevelEv
//  CrossbowEnchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, bool, int); //TODO: incomplete function definition // _ZN15CrossbowEnchantC2EN7Enchant4TypeENS0_9FrequencyERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESA_ibi
};
