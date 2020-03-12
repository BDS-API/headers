#pragma once

#include <string>
#include <vector>


class MobEffectInstance {

public:
    static long MAX_AMPLIFIER_COUNT;
    static long NO_EFFECT;

    bool displaysOnScreenTextureAnimation()const;
//  bool hasDifficulityDuration(Difficulty)const; //TODO: incomplete function definition
//  void setDifficulityDuration(Difficulty, int); //TODO: incomplete function definition
    MobEffectInstance(unsigned int);
    void applyEffects(Actor *)const;
    void getComponentName()const;
    bool isAmbient()const;
    bool isEffectVisible()const;
    MobEffectInstance(unsigned int, int, int, bool, bool, bool);
    void getId()const;
    MobEffectInstance(unsigned int, int);
    void tick(Actor *);
//  void getDifficulityDuration(Difficulty)const; //TODO: incomplete function definition
    void areAllEffectsAmbient(std::vector<MobEffectInstance> const&);
    void update(MobEffectInstance const&);
    void getSplashDuration()const;
    std::string getDisplayName()const;
    void _setVisibility();
    std::string toString()const;
    void getLingerDuration()const;
    MobEffectInstance(unsigned int, int, int);
    MobEffectInstance(unsigned int, int, int, int, int, int, bool, bool, bool);
    void getColorValue(std::vector<MobEffectInstance> const&);
    bool isNoCounter()const;
    void removeEffects(Actor *)const;
    void load(CompoundTag *);
    void getSplashEffect()const;
    void operator==(MobEffectInstance const&)const;
    void operator<(MobEffectInstance const&)const;
    void _tickDownDuration();
    void getAmplifier()const;
    void getDuration()const;
    void operator!=(MobEffectInstance const&)const;
    std::string getDescriptionId()const;
    MobEffectInstance();
    void save()const;
    void setNoCounter(bool);
    void setDuration(int);
};
