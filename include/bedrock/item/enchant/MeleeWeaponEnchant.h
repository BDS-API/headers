#pragma once

#include <string>
#include "Enchant.h"


class MeleeWeaponEnchant : public Enchant {

public:
    virtual ~MeleeWeaponEnchant(); // _ZN18MeleeWeaponEnchantD2Ev
    virtual void __fake_function0(); // fake
    virtual void getMinCost(int)const; // _ZNK18MeleeWeaponEnchant10getMinCostEi
    virtual void getMaxCost(int)const; // _ZNK18MeleeWeaponEnchant10getMaxCostEi
    virtual void getMaxLevel()const; // _ZNK18MeleeWeaponEnchant11getMaxLevelEv
    virtual void getDamageBonus(int, Actor const&)const; // _ZNK18MeleeWeaponEnchant14getDamageBonusEiRK5Actor
    virtual void doPostAttack(Actor &, Actor &, int)const; // _ZNK18MeleeWeaponEnchant12doPostAttackER5ActorS1_i
    virtual bool isMeleeDamageEnchant()const; // _ZNK18MeleeWeaponEnchant20isMeleeDamageEnchantEv
//    MeleeWeaponEnchant(long, long, std::string const&, std::string const&, int, int); //TODO: incomplete function definition // _ZN18MeleeWeaponEnchantC2EN7Enchant4TypeENS0_9FrequencyERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESA_ii
};
