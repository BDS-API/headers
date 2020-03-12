#pragma once

#include <string>
#include "Enchant.h"


class MeleeWeaponEnchant : Enchant {

public:
    ~MeleeWeaponEnchant();
    virtual bool isMeleeDamageEnchant()const;
    virtual void getDamageBonus(int, Actor const&)const;
    virtual void getMaxLevel()const;
    virtual void doPostAttack(Actor &, Actor &, int)const;
    virtual void getMaxCost(int)const;
    virtual void getMinCost(int)const;
//  MeleeWeaponEnchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, int); //TODO: incomplete function definition
};
