#pragma once

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

    virtual MobEffect::~MobEffect();
    virtual void applyEffects(Actor *, int, int)const;
    virtual void removeEffects(Actor *);
    virtual void applyInstantaneousEffect(Actor *, Actor *, Actor *, int, float)const;
    virtual bool isInstantaneous(void)const;
    virtual void getAttributeModifierValue(int, AttributeModifier const&)const;

    void initEffects(ResourcePackManager *);
    void addAttributeModifier(Attribute const&, std::shared_ptr<AttributeModifier>);
    void addAttributeBuff(Attribute const&, std::shared_ptr<AttributeBuff>);
    void setValueAmplifier(std::shared_ptr<Amplifier>);
    void setDurationAmplifier(std::shared_ptr<Amplifier>);
    void shutdownEffects(void);
    void getByName(std::string const&);
    void getById(int);
    void getId(void)const;
    void getComponentName(void)const;
    MobEffect(int, std::string const&, std::string const&, bool, int, int, std::string const&, bool);
    void _createInstantBuff(std::shared_ptr<AttributeBuff> const&, int, float)const;
    void _createTemporalBuff(std::shared_ptr<AttributeBuff> const&, int, int)const;
    void _createAttributeModifer(std::shared_ptr<AttributeModifier> const&, int)const;
    bool isHarmful(void)const;
    bool hasIcon(void)const;
    void getIcon(void)const;
    void getDurationModifier(void)const;
    bool isDisabled(void)const;
    void getColor(void)const;
    bool isVisible(void)const;
    void clearAttributeBuffs(void);
    void clearAttributeModifiers(void);
    void viewAttributeModifiers(void)const;
    void _setDurationModifier(float);
};
