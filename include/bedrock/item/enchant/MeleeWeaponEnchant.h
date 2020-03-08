#pragma once

#include "../../actor/Actor"


class MeleeWeaponEnchant : Enchant {

public:
    virtual MeleeWeaponEnchant::~MeleeWeaponEnchant()
    virtual void getMinCost(int)const;
    virtual void getMaxCost(int)const;
    virtual void getMaxLevel()const;
    virtual void getDamageBonus(int, Actor const&)const;
    virtual void doPostAttack(Actor &, Actor &, int)const;
    virtual bool isMeleeDamageEnchant()const;

    MeleeWeaponEnchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, int);
};
