#pragma once

#include <string>
#include "Enchant.h"


class TridentRiptideEnchant : public Enchant {

public:
    virtual ~TridentRiptideEnchant(); // _ZN21TridentRiptideEnchantD2Ev
    virtual void __fake_function0(); // fake
    virtual bool isCompatibleWith__incomplete0(long)const; //TODO: incomplete function definition // _ZNK21TridentRiptideEnchant16isCompatibleWithEN7Enchant4TypeE
    virtual void getMinCost(int)const; // _ZNK21TridentRiptideEnchant10getMinCostEi
    virtual void getMaxCost(int)const; // _ZNK21TridentRiptideEnchant10getMaxCostEi
    virtual void getMaxLevel()const; // _ZNK21TridentRiptideEnchant11getMaxLevelEv
//    TridentRiptideEnchant(long, long, std::string const&, std::string const&, int, bool, int); //TODO: incomplete function definition // _ZN21TridentRiptideEnchantC2EN7Enchant4TypeENS0_9FrequencyERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESA_ibi
};
