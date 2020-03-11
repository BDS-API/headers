#pragma once

#include "./Potion.h"
#include <memory>
#include <vector>
#include "./MobEffectInstance.h"
#include <string>


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


    void addPotion(std::shared_ptr<Potion const>);
    std::string getNameId()const;
    void getPotionCount();
    Potion(std::string const&);
    Potion(std::string const&, std::string const&);
//  Potion(std::string const&, std::string const&, MobEffectInstance const&, Potion::PotionVariant); //TODO: incomplete function definition
//  Potion(std::string const&, std::string const&, std::string const&, MobEffectInstance const&, Potion::PotionVariant); //TODO: incomplete function definition
//  Potion(std::string const&, std::vector<std::string, std::allocator<std::string>>, std::vector<MobEffectInstance, std::allocator<MobEffectInstance>>, Potion::PotionVariant); //TODO: incomplete function definition
    void initPotions();
    void shutdownPotions();
    void getPotionId()const;
    void getPotionVariant()const;
//  std::string getName(Potion::PotionType)const; //TODO: incomplete function definition
//  std::string getDescriptionId(Potion::PotionType)const; //TODO: incomplete function definition
    std::string getDescriptionId()const;
    std::string getPrefix()const;
//  void appendFormattedPotionText(std::string &, Potion::PotionType, float)const; //TODO: incomplete function definition
//  void getPotentencyDescription(Potion::PotionType, float, std::string const&, MobEffectInstance const&)const; //TODO: incomplete function definition
//  std::string getPotentencyDescription(Potion::PotionType, float)const; //TODO: incomplete function definition
    std::string effectPotencyToString(MobEffectInstance const&)const;
//  std::string effectDurationToString(Potion::PotionType, float)const; //TODO: incomplete function definition
//  std::string effectDurationToString(Potion::PotionType, float, MobEffectInstance const&)const; //TODO: incomplete function definition
    void getMobEffectId()const;
    void getMobEffect()const;
    void getMobEffects()const;
    void getPotion(int);
    void getPotion(std::string const&);
    void getBasePotion(int);
    ~Potion();
    Potion(Potion const&);
};
