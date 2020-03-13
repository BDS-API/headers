#pragma once

#include <string>


class Enchant {

public:
    static long mEnchants;
    static long mAllowExperimental;

    ~Enchant(); // _ZN7EnchantD2Ev
//  virtual bool isCompatibleWith(Enchant::Type)const; //TODO: incomplete function definition // _ZNK7Enchant16isCompatibleWithENS_4TypeE
    virtual void getMinCost(int)const; // _ZNK7Enchant10getMinCostEi
    virtual void getMaxCost(int)const; // _ZNK7Enchant10getMaxCostEi
    virtual void getMinLevel()const; // _ZNK7Enchant11getMinLevelEv
    virtual void getMaxLevel()const; // _ZNK7Enchant11getMaxLevelEv
    virtual void getDamageProtection(int, ActorDamageSource const&)const; // _ZNK7Enchant19getDamageProtectionEiRK17ActorDamageSource
    virtual void getDamageBonus(int, Actor const&)const; // _ZNK7Enchant14getDamageBonusEiRK5Actor
    virtual void doPostAttack(Actor &, Actor &, int)const; // _ZNK7Enchant12doPostAttackER5ActorS1_i
    virtual void doPostHurt(ItemInstance &, Actor &, Actor &, int)const; // _ZNK7Enchant10doPostHurtER12ItemInstanceR5ActorS3_i
    virtual bool isMeleeDamageEnchant()const; // _ZNK7Enchant20isMeleeDamageEnchantEv
    virtual bool isProtectionEnchant()const; // _ZNK7Enchant19isProtectionEnchantEv
    virtual bool isTreasureOnly()const; // _ZNK7Enchant14isTreasureOnlyEv
//  Enchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, int, bool); //TODO: incomplete function definition // _ZN7EnchantC2ENS_4TypeENS_9FrequencyERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES9_iib
//  Enchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, int); //TODO: incomplete function definition // _ZN7EnchantC2ENS_4TypeENS_9FrequencyERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES9_ii
    void getFrequency()const; // _ZNK7Enchant12getFrequencyEv
    bool isLootable()const; // _ZNK7Enchant10isLootableEv
    bool isExperimental()const; // _ZNK7Enchant14isExperimentalEv
    void allowExperimentalEnchants(); // _ZN7Enchant25allowExperimentalEnchantsEv
    bool canEnchant(ItemInstance const&, bool)const; // _ZNK7Enchant10canEnchantERK12ItemInstanceb
    bool canEnchant(int, bool)const; // _ZNK7Enchant10canEnchantEib
    bool canPrimaryEnchant(ItemInstance const&)const; // _ZNK7Enchant17canPrimaryEnchantERK12ItemInstance
    bool canPrimaryEnchant(int)const; // _ZNK7Enchant17canPrimaryEnchantEi
    bool canSecondaryEnchant(ItemInstance const&)const; // _ZNK7Enchant19canSecondaryEnchantERK12ItemInstance
    bool canSecondaryEnchant(int)const; // _ZNK7Enchant19canSecondaryEnchantEi
    std::string getDescription()const; // _ZNK7Enchant14getDescriptionB5cxx11Ev
    std::string getDescriptionId()const; // _ZNK7Enchant16getDescriptionIdB5cxx11Ev
    void getStringId()const; // _ZNK7Enchant11getStringIdEv
    void initEnchants(bool); // _ZN7Enchant12initEnchantsEb
    void setAllowExperimental(bool); // _ZN7Enchant20setAllowExperimentalEb
    void setDisabled(); // _ZN7Enchant11setDisabledEv
    void shutdownEnchants(); // _ZN7Enchant16shutdownEnchantsEv
    void setExperimental(); // _ZN7Enchant15setExperimentalEv
    bool isAvailable()const; // _ZNK7Enchant11isAvailableEv
    bool isDisabled()const; // _ZNK7Enchant10isDisabledEv
};
