#pragma once



class Potion {

public:
    static long mPotionsById;
    static long mPotionsByName[abi:cxx11];
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
    void getPotionCount();
    Potion(std::string const&);
    Potion(std::string const&, std::string const&);
    Potion(std::string const&, std::string const&, MobEffectInstance const&, Potion::PotionVariant);
    Potion(std::string const&, std::string const&, std::string const&, MobEffectInstance const&, Potion::PotionVariant);
    Potion(std::string const&, std::vector<std::string, std::allocator<std::string>>, std::vector<MobEffectInstance, std::allocator<MobEffectInstance>>, Potion::PotionVariant);
    void initPotions();
    void shutdownPotions();
    void getPotionId()const;
    void getPotionVariant()const;
    void appendFormattedPotionText(std::string &, Potion::PotionType, float)const;
    void getPotentencyDescription(Potion::PotionType, float, std::string const&, MobEffectInstance const&)const;
    void getMobEffectId()const;
    void getMobEffect()const;
    void getMobEffects()const;
    void getPotion(int);
    void getPotion(std::string const&);
    void getBasePotion(int);
    Potion(Potion const&);
};
