#pragma once

#include <string>
#include <vector>


class MobEffectInstance {

public:
    static long MAX_AMPLIFIER_COUNT;
    static long NO_EFFECT;

    MobEffectInstance(); // _ZN17MobEffectInstanceC2Ev
    MobEffectInstance(unsigned int); // _ZN17MobEffectInstanceC2Ej
    void _setVisibility(); // _ZN17MobEffectInstance14_setVisibilityEv
    MobEffectInstance(unsigned int, int); // _ZN17MobEffectInstanceC2Eji
    MobEffectInstance(unsigned int, int, int); // _ZN17MobEffectInstanceC2Ejii
    MobEffectInstance(unsigned int, int, int, bool, bool, bool); // _ZN17MobEffectInstanceC2Ejiibbb
    MobEffectInstance(unsigned int, int, int, int, int, int, bool, bool, bool); // _ZN17MobEffectInstanceC2Ejiiiiibbb
    void update(MobEffectInstance const&); // _ZN17MobEffectInstance6updateERKS_
    void getId()const; // _ZNK17MobEffectInstance5getIdEv
    void getDuration()const; // _ZNK17MobEffectInstance11getDurationEv
    void setDuration(int); // _ZN17MobEffectInstance11setDurationEi
    void getAmplifier()const; // _ZNK17MobEffectInstance12getAmplifierEv
    void getSplashDuration()const; // _ZNK17MobEffectInstance17getSplashDurationEv
    void getLingerDuration()const; // _ZNK17MobEffectInstance17getLingerDurationEv
    void getSplashEffect()const; // _ZNK17MobEffectInstance15getSplashEffectEv
    bool isAmbient()const; // _ZNK17MobEffectInstance9isAmbientEv
    bool isEffectVisible()const; // _ZNK17MobEffectInstance15isEffectVisibleEv
    bool displaysOnScreenTextureAnimation()const; // _ZNK17MobEffectInstance32displaysOnScreenTextureAnimationEv
    void tick(Actor *); // _ZN17MobEffectInstance4tickEP5Actor
    void _tickDownDuration(); // _ZN17MobEffectInstance17_tickDownDurationEv
    void applyEffects(Actor *)const; // _ZNK17MobEffectInstance12applyEffectsEP5Actor
    void removeEffects(Actor *)const; // _ZNK17MobEffectInstance13removeEffectsEP5Actor
    std::string getDescriptionId()const; // _ZNK17MobEffectInstance16getDescriptionIdB5cxx11Ev
    std::string getDisplayName()const; // _ZNK17MobEffectInstance14getDisplayNameB5cxx11Ev
    void getComponentName()const; // _ZNK17MobEffectInstance16getComponentNameEv
    std::string toString()const; // _ZNK17MobEffectInstance8toStringB5cxx11Ev
    void operator==(MobEffectInstance const&)const; // _ZNK17MobEffectInstanceeqERKS_
    void operator!=(MobEffectInstance const&)const; // _ZNK17MobEffectInstanceneERKS_
    void operator<(MobEffectInstance const&)const; // _ZNK17MobEffectInstanceltERKS_
    void save()const; // _ZNK17MobEffectInstance4saveEv
//  void getDifficulityDuration(Difficulty)const; //TODO: incomplete function definition // _ZNK17MobEffectInstance22getDifficulityDurationE10Difficulty
    void load(CompoundTag *); // _ZN17MobEffectInstance4loadEP11CompoundTag
    void setNoCounter(bool); // _ZN17MobEffectInstance12setNoCounterEb
    bool isNoCounter()const; // _ZNK17MobEffectInstance11isNoCounterEv
    void getColorValue(std::vector<MobEffectInstance> const&); // _ZN17MobEffectInstance13getColorValueERKSt6vectorIS_SaIS_EE
    void areAllEffectsAmbient(std::vector<MobEffectInstance> const&); // _ZN17MobEffectInstance20areAllEffectsAmbientERKSt6vectorIS_SaIS_EE
//  bool hasDifficulityDuration(Difficulty)const; //TODO: incomplete function definition // _ZNK17MobEffectInstance22hasDifficulityDurationE10Difficulty
//  void setDifficulityDuration(Difficulty, int); //TODO: incomplete function definition // _ZN17MobEffectInstance22setDifficulityDurationE10Difficultyi
};
