#pragma once

#include "../bedrock/actor/Actor"
#include "../bedrock/nbt/CompoundTag"


class MobEffectInstance {

public:
    static long MAX_AMPLIFIER_COUNT;
    static long NO_EFFECT;


    MobEffectInstance(void);
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
    void getComponentName()const;
    void save()const;
    void getDifficulityDuration(Difficulty)const;
    void load(CompoundTag *);
    void setNoCounter(bool);
    bool isNoCounter()const;
    void getColorValue(std::vector<MobEffectInstance, std::allocator<MobEffectInstance>> const&);
    void areAllEffectsAmbient(std::vector<MobEffectInstance, std::allocator<MobEffectInstance>> const&);
    bool hasDifficulityDuration(Difficulty)const;
    void setDifficulityDuration(Difficulty, int);
};
