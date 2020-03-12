#pragma once

#include <string>


class Enchant {

public:
    static long mEnchants;
    static long mAllowExperimental;

    virtual void getDamageProtection(int, ActorDamageSource const&)const;
    virtual void getMaxCost(int)const;
//  virtual bool isCompatibleWith(Enchant::Type)const; //TODO: incomplete function definition
    virtual void doPostHurt(ItemInstance &, Actor &, Actor &, int)const;
    virtual bool isMeleeDamageEnchant()const;
    virtual bool isProtectionEnchant()const;
    virtual void getDamageBonus(int, Actor const&)const;
    virtual void getMinLevel()const;
    ~Enchant();
    virtual void getMaxLevel()const;
    virtual void getMinCost(int)const;
    virtual void doPostAttack(Actor &, Actor &, int)const;
    virtual bool isTreasureOnly()const;
//  Enchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, int); //TODO: incomplete function definition
    bool canEnchant(int, bool)const;
    bool isDisabled()const;
    void initEnchants(bool);
    bool isLootable()const;
    std::string getDescription()const;
    bool canPrimaryEnchant(int)const;
    void getFrequency()const;
    bool canSecondaryEnchant(ItemInstance const&)const;
    void setAllowExperimental(bool);
    bool isExperimental()const;
//  Enchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, int, bool); //TODO: incomplete function definition
    bool canPrimaryEnchant(ItemInstance const&)const;
    bool isAvailable()const;
    bool canEnchant(ItemInstance const&, bool)const;
    void shutdownEnchants();
    std::string getDescriptionId()const;
    bool canSecondaryEnchant(int)const;
    void setDisabled();
    void getStringId()const;
    void allowExperimentalEnchants();
    void setExperimental();
};
