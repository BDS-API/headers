#pragma once

#include "../ItemInstance.h"
#include "../../actor/damagesource/ActorDamageSource.h"
#include <string>
#include "../../actor/Actor.h"


class Enchant {

public:
    static long mEnchants;
    static long mAllowExperimental;

    virtual ~Enchant();
//  virtual bool isCompatibleWith(Enchant::Type)const; //TODO: incomplete function definition
    virtual void getMinCost(int)const;
    virtual void getMaxCost(int)const;
    virtual void getMinLevel()const;
    virtual void getMaxLevel()const;
    virtual void getDamageProtection(int, ActorDamageSource const&)const;
    virtual void getDamageBonus(int, Actor const&)const;
    virtual void doPostAttack(Actor &, Actor &, int)const;
    virtual void doPostHurt(ItemInstance &, Actor &, Actor &, int)const;
    virtual bool isMeleeDamageEnchant()const;
    virtual bool isProtectionEnchant()const;
    virtual bool isTreasureOnly()const;

//  Enchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, int, bool); //TODO: incomplete function definition
//  Enchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, int); //TODO: incomplete function definition
    void getFrequency()const;
    bool isLootable()const;
    bool isExperimental()const;
    void allowExperimentalEnchants();
    bool canEnchant(ItemInstance const&, bool)const;
    bool canEnchant(int, bool)const;
    bool canPrimaryEnchant(ItemInstance const&)const;
    bool canPrimaryEnchant(int)const;
    bool canSecondaryEnchant(ItemInstance const&)const;
    bool canSecondaryEnchant(int)const;
    std::string getDescription()const;
    std::string getDescriptionId()const;
    void getStringId()const;
    void initEnchants(bool);
    void setAllowExperimental(bool);
    void setDisabled();
    void shutdownEnchants();
    void setExperimental();
    bool isAvailable()const;
    bool isDisabled()const;
};
