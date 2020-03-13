#pragma once

#include <string>
#include "MobEffect.h"


class InstantaneousMobEffect : MobEffect {

public:
    ~InstantaneousMobEffect(); // _ZN22InstantaneousMobEffectD2Ev
    virtual bool isInstantaneous()const; // _ZNK22InstantaneousMobEffect15isInstantaneousEv
    virtual bool isDurationEffectTick(int, int)const; // _ZNK22InstantaneousMobEffect20isDurationEffectTickEii
    InstantaneousMobEffect(int, std::string const&, std::string const&, bool, int, int); // _ZN22InstantaneousMobEffectC2EiRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_bii
};
