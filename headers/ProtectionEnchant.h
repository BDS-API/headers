#pragma once

class ProtectionEnchant : Enchant {

public:
    static long THORNS_CHANCE_PER_LEVEL;

    virtual ~ProtectionEnchant();
    virtual void getMinCost(int)const;
    virtual void getMaxCost(int)const;
    virtual void getMaxLevel(void)const;
    virtual void getDamageProtection(int, ActorDamageSource const&)const;
    virtual void doPostHurt(ItemInstance &, Actor &, Actor &, int)const;
    virtual bool isProtectionEnchant(void)const;

    void ProtectionEnchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, int);
    void getLevelCostSpanByType(void)const;
    void getThornsDamage(int)const;
};
