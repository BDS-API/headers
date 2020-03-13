#pragma once

#include <string>
#include "Enchant.h"


class TridentChannelingEnchant : Enchant {

public:
    ~TridentChannelingEnchant(); // _ZN24TridentChannelingEnchantD2Ev
//  virtual bool isCompatibleWith(Enchant::Type)const; //TODO: incomplete function definition // _ZNK24TridentChannelingEnchant16isCompatibleWithEN7Enchant4TypeE
    virtual void getMinCost(int)const; // _ZNK24TridentChannelingEnchant10getMinCostEi
    virtual void getMaxCost(int)const; // _ZNK24TridentChannelingEnchant10getMaxCostEi
    virtual void getMaxLevel()const; // _ZNK24TridentChannelingEnchant11getMaxLevelEv
//  TridentChannelingEnchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, bool, int); //TODO: incomplete function definition // _ZN24TridentChannelingEnchantC2EN7Enchant4TypeENS0_9FrequencyERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESA_ibi
};
