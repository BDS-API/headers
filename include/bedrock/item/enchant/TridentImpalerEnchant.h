#pragma once

#include <string>
#include "Enchant.h"


class TridentImpalerEnchant : public Enchant {

public:
    virtual ~TridentImpalerEnchant(); // _ZN21TridentImpalerEnchantD2Ev
    virtual void __fake_function0(); // fake
    virtual void getMinCost(int)const; // _ZNK21TridentImpalerEnchant10getMinCostEi
    virtual void getMaxCost(int)const; // _ZNK21TridentImpalerEnchant10getMaxCostEi
    virtual void getMaxLevel()const; // _ZNK21TridentImpalerEnchant11getMaxLevelEv
    virtual void getDamageBonus(int, Actor const&)const; // _ZNK21TridentImpalerEnchant14getDamageBonusEiRK5Actor
//    TridentImpalerEnchant(long, long, std::string const&, std::string const&, int, bool, int); //TODO: incomplete function definition // _ZN21TridentImpalerEnchantC2EN7Enchant4TypeENS0_9FrequencyERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESA_ibi
};
