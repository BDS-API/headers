#pragma once

#include <string>
#include "./Enchant.h"
#include "../../actor/Actor.h"


class MeleeWeaponEnchant : Enchant {

public:
    virtual ~MeleeWeaponEnchant();
    virtual void getMinCost(int)const;
    virtual void getMaxCost(int)const;
    virtual void getMaxLevel()const;
    virtual void getDamageBonus(int, Actor const&)const;
    virtual void doPostAttack(Actor &, Actor &, int)const;
    virtual bool isMeleeDamageEnchant()const;

//  MeleeWeaponEnchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, int); //TODO: incomplete function definition
};
