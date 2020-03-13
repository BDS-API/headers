#pragma once

#include <string>
#include <memory>
#include <vector>


class Potion {

public:
    static long mPotionsById;
    static std::string mPotionsByName;
    static long Water;
    static long Mundane;
    static long LongMundane;
    static long Thick;
    static long Awkward;
    static long Nightvision;
    static long LongNightvision;
    static long Invisibility;
    static long LongInvisibility;
    static long Leaping;
    static long LongLeaping;
    static long StrongLeaping;
    static long FireResistance;
    static long LongFireResistance;
    static long Swiftness;
    static long LongSwiftness;
    static long StrongSwiftness;
    static long Slowness;
    static long LongSlowness;
    static long WaterBreathing;
    static long LongWaterBreathing;
    static long Healing;
    static long StrongHealing;
    static long Harming;
    static long StrongHarming;
    static long Poison;
    static long LongPoison;
    static long StrongPoison;
    static long Regeneration;
    static long LongRegeneration;
    static long StrongRegeneration;
    static long Strength;
    static long LongStrength;
    static long StrongStrength;
    static long Weakness;
    static long LongWeakness;
    static long Wither;
    static long TurtleMaster;
    static long LongTurtleMaster;
    static long StrongTurtleMaster;
    static long SlowFalling;
    static long LongSlowFalling;
    static long mLastId;

    void addPotion(std::shared_ptr<Potion const>); // _ZN6Potion9addPotionESt10shared_ptrIKS_E
    std::string getNameId()const; // _ZNK6Potion9getNameIdB5cxx11Ev
    void getPotionCount(); // _ZN6Potion14getPotionCountEv
    Potion(std::string const&); // _ZN6PotionC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    Potion(std::string const&, std::string const&); // _ZN6PotionC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
//  Potion(std::string const&, std::string const&, MobEffectInstance const&, Potion::PotionVariant); //TODO: incomplete function definition // _ZN6PotionC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_RK17MobEffectInstanceNS_13PotionVariantE
//  Potion(std::string const&, std::string const&, std::string const&, MobEffectInstance const&, Potion::PotionVariant); //TODO: incomplete function definition // _ZN6PotionC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_S7_RK17MobEffectInstanceNS_13PotionVariantE
//  Potion(std::string const&, std::vector<std::string>, std::vector<MobEffectInstance>, Potion::PotionVariant); //TODO: incomplete function definition // _ZN6PotionC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS5_SaIS5_EES8_I17MobEffectInstanceSaISB_EENS_13PotionVariantE
    void initPotions(); // _ZN6Potion11initPotionsEv
    void shutdownPotions(); // _ZN6Potion15shutdownPotionsEv
    void getPotionId()const; // _ZNK6Potion11getPotionIdEv
    void getPotionVariant()const; // _ZNK6Potion16getPotionVariantEv
//  std::string getName(Potion::PotionType)const; //TODO: incomplete function definition // _ZNK6Potion7getNameB5cxx11ENS_10PotionTypeE
//  std::string getDescriptionId(Potion::PotionType)const; //TODO: incomplete function definition // _ZNK6Potion16getDescriptionIdB5cxx11ENS_10PotionTypeE
    std::string getDescriptionId()const; // _ZNK6Potion16getDescriptionIdB5cxx11Ev
    std::string getPrefix()const; // _ZNK6Potion9getPrefixB5cxx11Ev
//  void appendFormattedPotionText(std::string &, Potion::PotionType, float)const; //TODO: incomplete function definition // _ZNK6Potion25appendFormattedPotionTextERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEENS_10PotionTypeEf
//  void getPotentencyDescription(Potion::PotionType, float, std::string const&, MobEffectInstance const&)const; //TODO: incomplete function definition // _ZNK6Potion24getPotentencyDescriptionENS_10PotionTypeEfRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK17MobEffectInstance
//  std::string getPotentencyDescription(Potion::PotionType, float)const; //TODO: incomplete function definition // _ZNK6Potion24getPotentencyDescriptionB5cxx11ENS_10PotionTypeEf
    std::string effectPotencyToString(MobEffectInstance const&)const; // _ZNK6Potion21effectPotencyToStringB5cxx11ERK17MobEffectInstance
//  std::string effectDurationToString(Potion::PotionType, float)const; //TODO: incomplete function definition // _ZNK6Potion22effectDurationToStringB5cxx11ENS_10PotionTypeEf
//  std::string effectDurationToString(Potion::PotionType, float, MobEffectInstance const&)const; //TODO: incomplete function definition // _ZNK6Potion22effectDurationToStringB5cxx11ENS_10PotionTypeEfRK17MobEffectInstance
    void getMobEffectId()const; // _ZNK6Potion14getMobEffectIdEv
    void getMobEffect()const; // _ZNK6Potion12getMobEffectEv
    void getMobEffects()const; // _ZNK6Potion13getMobEffectsEv
    void getPotion(int); // _ZN6Potion9getPotionEi
    void getPotion(std::string const&); // _ZN6Potion9getPotionERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getBasePotion(int); // _ZN6Potion13getBasePotionEi
    ~Potion(); // _ZN6PotionD2Ev
    Potion(Potion const&); // _ZN6PotionC2ERKS_
};
