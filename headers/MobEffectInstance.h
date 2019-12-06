#pragma once

class MobEffectInstance {

public:
    static long MobEffectInstance::MAX_AMPLIFIER_COUNT;
    static long MobEffectInstance::NO_EFFECT;


    void MobEffectInstance(void);
    void MobEffectInstance(unsigned int);
    void _setVisibility(void);
    void MobEffectInstance(unsigned int, int);
    void MobEffectInstance(unsigned int, int, int);
    void MobEffectInstance(unsigned int, int, int, bool, bool, bool);
    void MobEffectInstance(unsigned int, int, int, int, int, int, bool, bool, bool);
    void update(MobEffectInstance const&);
    void getId(void)const;
    void getDuration(void)const;
    void setDuration(int);
    void getAmplifier(void)const;
    void getSplashDuration(void)const;
    void getLingerDuration(void)const;
    void getSplashEffect(void)const;
    bool isAmbient(void)const;
    bool isEffectVisible(void)const;
    void displaysOnScreenTextureAnimation(void)const;
    void tick(Actor *);
    void _tickDownDuration(void);
    void applyEffects(Actor *)const;
    void removeEffects(Actor *)const;
    void getComponentName(void)const;
    void save(void)const;
    void getDifficulityDuration(Difficulty)const;
    void load(CompoundTag *);
    void setNoCounter(bool);
    bool isNoCounter(void)const;
    void getColorValue(std::vector<MobEffectInstance, std::allocator<MobEffectInstance>> const&);
    void areAllEffectsAmbient(std::vector<MobEffectInstance, std::allocator<MobEffectInstance>> const&);
    bool hasDifficulityDuration(Difficulty)const;
    void setDifficulityDuration(Difficulty, int);
};
