#pragma once

#include "../bedrock/actor/Actor.h"
#include <vector>
#include "../bedrock/nbt/CompoundTag.h"


class MobEffectInstance {

public:
    static long MAX_AMPLIFIER_COUNT;
    static long NO_EFFECT;

    MobEffectInstance(unsigned int, int, int, bool, bool, bool);
    MobEffectInstance(unsigned int, int, int, int, int, int, bool, bool, bool);
    std::string toString()const;
//  void getDifficulityDuration(Difficulty)const; //TODO: incomplete function definition
    MobEffectInstance(unsigned int);
    void getAmplifier()const;
    void operator<(MobEffectInstance const&)const;
    void applyEffects(Actor *)const;
    std::string getDescriptionId()const;
    void getColorValue(std::vector<MobEffectInstance> const&);
    void setNoCounter(bool);
    void operator!=(MobEffectInstance const&)const;
    void removeEffects(Actor *)const;
    void getDuration()const;
    bool isAmbient()const;
    void getLingerDuration()const;
    bool isEffectVisible()const;
    void getComponentName()const;
    void getSplashDuration()const;
    void _tickDownDuration();
    std::string getDisplayName()const;
    void getId()const;
    void _setVisibility();
    void setDuration(int);
    void operator==(MobEffectInstance const&)const;
    void load(CompoundTag *);
//  bool hasDifficulityDuration(Difficulty)const; //TODO: incomplete function definition
    MobEffectInstance(unsigned int, int);
    void tick(Actor *);
    void getSplashEffect()const;
    void areAllEffectsAmbient(std::vector<MobEffectInstance> const&);
    bool displaysOnScreenTextureAnimation()const;
    bool isNoCounter()const;
    void save()const;
//  void setDifficulityDuration(Difficulty, int); //TODO: incomplete function definition
    MobEffectInstance();
    void update(MobEffectInstance const&);
    MobEffectInstance(unsigned int, int, int);
};
