#pragma once

#include <string>
#include "MobEffect.h"


class AbsorptionMobEffect : MobEffect {

public:
    ~AbsorptionMobEffect(); // _ZN19AbsorptionMobEffectD2Ev
    virtual void applyEffects(Actor *, int, int)const; // _ZNK19AbsorptionMobEffect12applyEffectsEP5Actorii
    virtual void removeEffects(Actor *); // _ZN19AbsorptionMobEffect13removeEffectsEP5Actor
    AbsorptionMobEffect(int, std::string const&, std::string const&, bool, int, int); // _ZN19AbsorptionMobEffectC2EiRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_bii
};
