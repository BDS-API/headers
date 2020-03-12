#pragma once

#include "MobEffectInstance.h"
#include <vector>
#include <string>
#include <memory>


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

    void getMobEffect()const;
    std::string effectPotencyToString(MobEffectInstance const&)const;
    void getPotionCount();
    void addPotion(std::shared_ptr<Potion const>);
    std::string getNameId()const;
    Potion(Potion const&);
//  std::string getName(Potion::PotionType)const; //TODO: incomplete function definition
//  void appendFormattedPotionText(std::string &, Potion::PotionType, float)const; //TODO: incomplete function definition
    void initPotions();
    ~Potion();
    void getBasePotion(int);
//  Potion(std::string const&, std::string const&, std::string const&, MobEffectInstance const&, Potion::PotionVariant); //TODO: incomplete function definition
//  Potion(std::string const&, std::vector<std::string>, std::vector<MobEffectInstance>, Potion::PotionVariant); //TODO: incomplete function definition
    std::string getDescriptionId()const;
    std::string getPrefix()const;
//  std::string getDescriptionId(Potion::PotionType)const; //TODO: incomplete function definition
    void getPotionId()const;
//  std::string effectDurationToString(Potion::PotionType, float)const; //TODO: incomplete function definition
    Potion(std::string const&, std::string const&);
    void getMobEffectId()const;
//  void getPotentencyDescription(Potion::PotionType, float, std::string const&, MobEffectInstance const&)const; //TODO: incomplete function definition
    void getPotion(int);
    Potion(std::string const&);
    void shutdownPotions();
//  std::string effectDurationToString(Potion::PotionType, float, MobEffectInstance const&)const; //TODO: incomplete function definition
//  Potion(std::string const&, std::string const&, MobEffectInstance const&, Potion::PotionVariant); //TODO: incomplete function definition
    void getPotion(std::string const&);
    void getPotionVariant()const;
    void getMobEffects()const;
//  std::string getPotentencyDescription(Potion::PotionType, float)const; //TODO: incomplete function definition
};
