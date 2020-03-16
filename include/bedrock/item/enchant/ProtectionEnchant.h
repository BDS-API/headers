#pragma once

#include <string>
#include "Enchant.h"


class ProtectionEnchant : public Enchant {

public:
    static long THORNS_CHANCE_PER_LEVEL;

    virtual ~ProtectionEnchant(); // _ZN17ProtectionEnchantD2Ev
    virtual void __fake_function0(); // fake
    virtual void getMinCost(int)const; // _ZNK17ProtectionEnchant10getMinCostEi
    virtual void getMaxCost(int)const; // _ZNK17ProtectionEnchant10getMaxCostEi
    virtual void getMaxLevel()const; // _ZNK17ProtectionEnchant11getMaxLevelEv
    virtual void getDamageProtection(int, ActorDamageSource const&)const; // _ZNK17ProtectionEnchant19getDamageProtectionEiRK17ActorDamageSource
    virtual void doPostHurt(ItemInstance &, Actor &, Actor &, int)const; // _ZNK17ProtectionEnchant10doPostHurtER12ItemInstanceR5ActorS3_i
    virtual bool isProtectionEnchant()const; // _ZNK17ProtectionEnchant19isProtectionEnchantEv
//    ProtectionEnchant(long, long, std::string const&, std::string const&, int, int); //TODO: incomplete function definition // _ZN17ProtectionEnchantC2EN7Enchant4TypeENS0_9FrequencyERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESA_ii
    void getLevelCostSpanByType()const; // _ZNK17ProtectionEnchant22getLevelCostSpanByTypeEv
    void getThornsDamage(int)const; // _ZNK17ProtectionEnchant15getThornsDamageEi
};
