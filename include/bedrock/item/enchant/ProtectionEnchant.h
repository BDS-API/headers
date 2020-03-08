#pragma once

#include "../../actor/damagesource/ActorDamageSource"
#include "../../actor/Actor"
#include "../ItemInstance"


class ProtectionEnchant : Enchant {

public:
    static long THORNS_CHANCE_PER_LEVEL;

    virtual ProtectionEnchant::~ProtectionEnchant()
    virtual void getMinCost(int)const;
    virtual void getMaxCost(int)const;
    virtual void getMaxLevel()const;
    virtual void getDamageProtection(int, ActorDamageSource const&)const;
    virtual void doPostHurt(ItemInstance &, Actor &, Actor &, int)const;
    virtual bool isProtectionEnchant()const;

    ProtectionEnchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, int);
    void getLevelCostSpanByType()const;
    void getThornsDamage(int)const;
};
