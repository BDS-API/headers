#pragma once

#include <string>
#include "MobEffect.h"


class AttackDamageMobEffect : MobEffect {

public:
    ~AttackDamageMobEffect(); // _ZN21AttackDamageMobEffectD2Ev
    virtual void getAttributeModifierValue(int, AttributeModifier const&)const; // _ZNK21AttackDamageMobEffect25getAttributeModifierValueEiRK17AttributeModifier
    AttackDamageMobEffect(int, std::string const&, std::string const&, bool, int, int); // _ZN21AttackDamageMobEffectC2EiRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_bii
};
