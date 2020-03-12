#pragma once

#include <string>
#include <memory>


class MobEffect {

public:
    static long DEFAULT_COLOR;
    static long EMPTY_EFFECT;
    static long MOVEMENT_SPEED;
    static long MOVEMENT_SLOWDOWN;
    static long DIG_SPEED;
    static long DIG_SLOWDOWN;
    static long DAMAGE_BOOST;
    static long HEAL;
    static long HARM;
    static long JUMP;
    static long CONFUSION;
    static long REGENERATION;
    static long DAMAGE_RESISTANCE;
    static long FIRE_RESISTANCE;
    static long WATER_BREATHING;
    static long INVISIBILITY;
    static long BLINDNESS;
    static long NIGHT_VISION;
    static long HUNGER;
    static long WEAKNESS;
    static long POISON;
    static long WITHER;
    static long HEALTH_BOOST;
    static long ABSORPTION;
    static long SATURATION;
    static long LEVITATION;
    static long FATAL_POISON;
    static long CONDUIT_POWER;
    static long SLOW_FALLING;
    static long BAD_OMEN;
    static long HERO_OF_THE_VILLAGE;
    static long mMobEffects;

    virtual void applyInstantaneousEffect(Actor *, Actor *, Actor *, int, float)const;
    virtual void removeEffects(Actor *);
    virtual void getAttributeModifierValue(int, AttributeModifier const&)const;
    ~MobEffect();
    virtual void applyEffects(Actor *, int, int)const;
    virtual bool isInstantaneous()const;
    void shutdownEffects();
    void getComponentName()const;
    void getId()const;
    void _createInstantBuff(std::shared_ptr<AttributeBuff> const&, int, float)const;
    void _createAttributeModifer(std::shared_ptr<AttributeModifier> const&, int)const;
    void clearAttributeBuffs();
    void getColor()const;
    std::string getResourceName()const;
    void getIcon()const;
    std::string getIconName()const;
    void initEffects(ResourcePackManager *);
    bool isHarmful()const;
    bool hasIcon()const;
    std::string formatDuration(MobEffectInstance const*);
    void setValueAmplifier(std::shared_ptr<Amplifier>);
    void setDurationAmplifier(std::shared_ptr<Amplifier>);
    std::string getDescriptionId()const;
    void getByName(std::string const&);
    void getById(int);
    void clearAttributeModifiers();
    void viewAttributeModifiers()const;
    void addAttributeModifier(Attribute const&, std::shared_ptr<AttributeModifier>);
    void _createTemporalBuff(std::shared_ptr<AttributeBuff> const&, int, int)const;
    void getDurationModifier()const;
    void _setDurationModifier(float);
    bool isVisible()const;
    MobEffect(int, std::string const&, std::string const&, bool, int, int, std::string const&, bool);
    void addAttributeBuff(Attribute const&, std::shared_ptr<AttributeBuff>);
    bool isDisabled()const;
};
