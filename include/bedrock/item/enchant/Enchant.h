#pragma once

#include "../../actor/Actor"
#include "../ItemInstance"
#include "../../actor/damagesource/ActorDamageSource"


class Enchant {

public:
    static long mEnchants;
    static long mAllowExperimental;

    virtual Enchant::~Enchant();
    virtual bool isCompatibleWith(Enchant::Type)const;
    virtual void getMinCost(int)const;
    virtual void getMaxCost(int)const;
    virtual void getMinLevel(void)const;
    virtual void getMaxLevel(void)const;
    virtual void getDamageProtection(int, ActorDamageSource const&)const;
    virtual void getDamageBonus(int, Actor const&)const;
    virtual void doPostAttack(Actor &, Actor &, int)const;
    virtual void doPostHurt(ItemInstance &, Actor &, Actor &, int)const;
    virtual bool isMeleeDamageEnchant(void)const;
    virtual bool isProtectionEnchant(void)const;
    virtual bool isTreasureOnly(void)const;

    Enchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, int, bool);
    Enchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, int);
    void getFrequency(void)const;
    bool isLootable(void)const;
    bool isExperimental(void)const;
    void allowExperimentalEnchants(void);
    bool canEnchant(ItemInstance const&, bool)const;
    bool canEnchant(int, bool)const;
    bool canPrimaryEnchant(ItemInstance const&)const;
    bool canPrimaryEnchant(int)const;
    bool canSecondaryEnchant(ItemInstance const&)const;
    bool canSecondaryEnchant(int)const;
    void getStringId(void)const;
    void initEnchants(bool);
    void setAllowExperimental(bool);
    void setDisabled(void);
    void shutdownEnchants(void);
    void setExperimental(void);
    bool isAvailable(void)const;
    bool isDisabled(void)const;
};
