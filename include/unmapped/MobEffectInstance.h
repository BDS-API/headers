#pragma once

#include <memory>
#include "../bedrock/nbt/CompoundTag.h"
#include "../bedrock/actor/Actor.h"
#include <vector>
#include "./MobEffectInstance.h"
#include <string>


class MobEffectInstance {

public:
    static long MAX_AMPLIFIER_COUNT;
    static long NO_EFFECT;


    MobEffectInstance();
    MobEffectInstance(unsigned int);
    void _setVisibility();
    MobEffectInstance(unsigned int, int);
    MobEffectInstance(unsigned int, int, int);
    MobEffectInstance(unsigned int, int, int, bool, bool, bool);
    MobEffectInstance(unsigned int, int, int, int, int, int, bool, bool, bool);
    void update(MobEffectInstance const&);
    void getId()const;
    void getDuration()const;
    void setDuration(int);
    void getAmplifier()const;
    void getSplashDuration()const;
    void getLingerDuration()const;
    void getSplashEffect()const;
    bool isAmbient()const;
    bool isEffectVisible()const;
    bool displaysOnScreenTextureAnimation()const;
    void tick(Actor *);
    void _tickDownDuration();
    void applyEffects(Actor *)const;
    void removeEffects(Actor *)const;
    std::string getDescriptionId()const;
    std::string getDisplayName()const;
    void getComponentName()const;
    std::string toString()const;
    void operator==(MobEffectInstance const&)const;
    void operator!=(MobEffectInstance const&)const;
    void operator<(MobEffectInstance const&)const;
    void save()const;
//  void getDifficulityDuration(Difficulty)const; //TODO: incomplete function definition
    void load(CompoundTag *);
    void setNoCounter(bool);
    bool isNoCounter()const;
    void getColorValue(std::vector<MobEffectInstance, std::allocator<MobEffectInstance>> const&);
    void areAllEffectsAmbient(std::vector<MobEffectInstance, std::allocator<MobEffectInstance>> const&);
//  bool hasDifficulityDuration(Difficulty)const; //TODO: incomplete function definition
//  void setDifficulityDuration(Difficulty, int); //TODO: incomplete function definition
};
