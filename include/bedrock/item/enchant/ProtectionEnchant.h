#pragma once

#include <string>
#include "Enchant.h"


class ProtectionEnchant : Enchant {

public:
    static long THORNS_CHANCE_PER_LEVEL;

    virtual void getMaxLevel()const;
    virtual void getMaxCost(int)const;
    virtual bool isProtectionEnchant()const;
    ~ProtectionEnchant();
    virtual void getMinCost(int)const;
    virtual void doPostHurt(ItemInstance &, Actor &, Actor &, int)const;
    virtual void getDamageProtection(int, ActorDamageSource const&)const;
    void getThornsDamage(int)const;
    void getLevelCostSpanByType()const;
//  ProtectionEnchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, int); //TODO: incomplete function definition
};
