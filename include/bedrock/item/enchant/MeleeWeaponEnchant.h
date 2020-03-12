#pragma once

#include "../../actor/Actor.h"
#include "Enchant.h"
#include <string>


class MeleeWeaponEnchant : Enchant {

public:
    virtual void getMaxCost(int)const;
    virtual void getMaxLevel()const;
    virtual void getMinCost(int)const;
    virtual void getDamageBonus(int, Actor const&)const;
    virtual bool isMeleeDamageEnchant()const;
    virtual void doPostAttack(Actor &, Actor &, int)const;
    ~MeleeWeaponEnchant();
//  MeleeWeaponEnchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, int); //TODO: incomplete function definition
};
