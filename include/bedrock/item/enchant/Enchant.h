#pragma once

#include "../../actor/Actor.h"
#include "../../actor/damagesource/ActorDamageSource.h"
#include <string>
#include "../ItemInstance.h"


class Enchant {

public:
    static long mEnchants;
    static long mAllowExperimental;

    virtual void getDamageBonus(int, Actor const&)const;
    virtual void doPostAttack(Actor &, Actor &, int)const;
    virtual void getMaxLevel()const;
    virtual bool isProtectionEnchant()const;
    virtual void getMinCost(int)const;
    virtual void doPostHurt(ItemInstance &, Actor &, Actor &, int)const;
    virtual void getMinLevel()const;
    virtual bool isTreasureOnly()const;
    virtual void getDamageProtection(int, ActorDamageSource const&)const;
//  virtual bool isCompatibleWith(Enchant::Type)const; //TODO: incomplete function definition
    ~Enchant();
    virtual bool isMeleeDamageEnchant()const;
    virtual void getMaxCost(int)const;
    void initEnchants(bool);
    bool canSecondaryEnchant(int)const;
    void setAllowExperimental(bool);
    void setExperimental();
    void setDisabled();
    void getFrequency()const;
    void allowExperimentalEnchants();
    bool canSecondaryEnchant(ItemInstance const&)const;
    bool isAvailable()const;
    std::string getDescription()const;
//  Enchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, int); //TODO: incomplete function definition
    bool canPrimaryEnchant(ItemInstance const&)const;
    bool canEnchant(int, bool)const;
    bool canEnchant(ItemInstance const&, bool)const;
//  Enchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, int, bool); //TODO: incomplete function definition
    std::string getDescriptionId()const;
    void shutdownEnchants();
    void getStringId()const;
    bool isLootable()const;
    bool isExperimental()const;
    bool canPrimaryEnchant(int)const;
    bool isDisabled()const;
};
