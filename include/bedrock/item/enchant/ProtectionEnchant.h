#pragma once

#include "Enchant.h"
#include <string>
#include "../ItemInstance.h"
#include "../../actor/Actor.h"
#include "../../actor/damagesource/ActorDamageSource.h"


class ProtectionEnchant : Enchant {

public:
    static long THORNS_CHANCE_PER_LEVEL;

    virtual void getMaxCost(int)const;
    virtual void getDamageProtection(int, ActorDamageSource const&)const;
    virtual void doPostHurt(ItemInstance &, Actor &, Actor &, int)const;
    ~ProtectionEnchant();
    virtual void getMinCost(int)const;
    virtual void getMaxLevel()const;
    virtual bool isProtectionEnchant()const;
    void getThornsDamage(int)const;
//  ProtectionEnchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, int); //TODO: incomplete function definition
    void getLevelCostSpanByType()const;
};
