#pragma once

class Potion {

public:
    static long Potion::mPotionsById;
    static long Potion::mPotionsByName[abi:cxx11];
    static long Potion::Water;
    static long Potion::Mundane;
    static long Potion::LongMundane;
    static long Potion::Thick;
    static long Potion::Awkward;
    static long Potion::Nightvision;
    static long Potion::LongNightvision;
    static long Potion::Invisibility;
    static long Potion::LongInvisibility;
    static long Potion::Leaping;
    static long Potion::LongLeaping;
    static long Potion::StrongLeaping;
    static long Potion::FireResistance;
    static long Potion::LongFireResistance;
    static long Potion::Swiftness;
    static long Potion::LongSwiftness;
    static long Potion::StrongSwiftness;
    static long Potion::Slowness;
    static long Potion::LongSlowness;
    static long Potion::WaterBreathing;
    static long Potion::LongWaterBreathing;
    static long Potion::Healing;
    static long Potion::StrongHealing;
    static long Potion::Harming;
    static long Potion::StrongHarming;
    static long Potion::Poison;
    static long Potion::LongPoison;
    static long Potion::StrongPoison;
    static long Potion::Regeneration;
    static long Potion::LongRegeneration;
    static long Potion::StrongRegeneration;
    static long Potion::Strength;
    static long Potion::LongStrength;
    static long Potion::StrongStrength;
    static long Potion::Weakness;
    static long Potion::LongWeakness;
    static long Potion::Wither;
    static long Potion::TurtleMaster;
    static long Potion::LongTurtleMaster;
    static long Potion::StrongTurtleMaster;
    static long Potion::SlowFalling;
    static long Potion::LongSlowFalling;
    static long Potion::mLastId;


    void addPotion(std::shared_ptr<Potion const>);
    void getPotionCount(void);
    void Potion(std::string const&);
    void Potion(std::string const&, std::string const&);
    void Potion(std::string const&, std::string const&, MobEffectInstance const&, Potion::PotionVariant);
    void Potion(std::string const&, std::string const&, std::string const&, MobEffectInstance const&, Potion::PotionVariant);
    void Potion(std::string const&, std::vector<std::string, std::allocator<std::string>>, std::vector<MobEffectInstance, std::allocator<MobEffectInstance>>, Potion::PotionVariant);
    void initPotions(void);
    void shutdownPotions(void);
    void getPotionId(void)const;
    void getPotionVariant(void)const;
    void appendFormattedPotionText(std::string &, Potion::PotionType, float)const;
    void getPotentencyDescription(Potion::PotionType, float, std::string const&, MobEffectInstance const&)const;
    void getMobEffectId(void)const;
    void getMobEffect(void)const;
    void getMobEffects(void)const;
    void getPotion(int);
    void getPotion(std::string const&);
    void getBasePotion(int);
    void Potion(Potion const&);
};
