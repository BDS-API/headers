#pragma once

#include <string>
#include "Item.h"


class SuspiciousStewItem : Item {

public:
    ~SuspiciousStewItem(); // _ZN18SuspiciousStewItemD2Ev
    virtual void uniqueAuxValues()const; // _ZNK18SuspiciousStewItem15uniqueAuxValuesEv
    virtual void useTimeDepleted(ItemStack &, Level *, Player *)const; // _ZNK18SuspiciousStewItem15useTimeDepletedER9ItemStackP5LevelP6Player
    void _getStewEffects(); // _ZN18SuspiciousStewItem15_getStewEffectsEv
    SuspiciousStewItem(std::string const&, short); // _ZN18SuspiciousStewItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEs
    void applyStewEffect(ItemStack const&, Actor &); // _ZN18SuspiciousStewItem15applyStewEffectERK9ItemStackR5Actor
};
