#pragma once

class MobEffect {

public:
    static long MobEffect::DEFAULT_COLOR;
    static long MobEffect::EMPTY_EFFECT;
    static long MobEffect::MOVEMENT_SPEED;
    static long MobEffect::MOVEMENT_SLOWDOWN;
    static long MobEffect::DIG_SPEED;
    static long MobEffect::DIG_SLOWDOWN;
    static long MobEffect::DAMAGE_BOOST;
    static long MobEffect::HEAL;
    static long MobEffect::HARM;
    static long MobEffect::JUMP;
    static long MobEffect::CONFUSION;
    static long MobEffect::REGENERATION;
    static long MobEffect::DAMAGE_RESISTANCE;
    static long MobEffect::FIRE_RESISTANCE;
    static long MobEffect::WATER_BREATHING;
    static long MobEffect::INVISIBILITY;
    static long MobEffect::BLINDNESS;
    static long MobEffect::NIGHT_VISION;
    static long MobEffect::HUNGER;
    static long MobEffect::WEAKNESS;
    static long MobEffect::POISON;
    static long MobEffect::WITHER;
    static long MobEffect::HEALTH_BOOST;
    static long MobEffect::ABSORPTION;
    static long MobEffect::SATURATION;
    static long MobEffect::LEVITATION;
    static long MobEffect::FATAL_POISON;
    static long MobEffect::CONDUIT_POWER;
    static long MobEffect::SLOW_FALLING;
    static long MobEffect::BAD_OMEN;
    static long MobEffect::HERO_OF_THE_VILLAGE;
    static long MobEffect::mMobEffects;

    virtual ~MobEffect();
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
    void getByName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void getById(int);
    void getId(void)const;
    void getComponentName(void)const;
    void MobEffect(int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool, int, int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool);
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
