#pragma once

#include "../../pack/ResourcePackManager.h"
#include "../attribute/AttributeModifier.h"
#include <string>
#include "../../../unmapped/MobEffectInstance.h"
#include "../Actor.h"
#include "../attribute/AttributeBuff.h"
#include "../../../unmapped/Amplifier.h"
#include "../../../unmapped/Attribute.h"
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

    ~MobEffect();
    virtual void applyInstantaneousEffect(Actor *, Actor *, Actor *, int, float)const;
    virtual bool isInstantaneous()const;
    virtual void applyEffects(Actor *, int, int)const;
    virtual void removeEffects(Actor *);
    virtual void getAttributeModifierValue(int, AttributeModifier const&)const;
    void setValueAmplifier(std::shared_ptr<Amplifier>);
    void clearAttributeModifiers();
    void getDurationModifier()const;
    std::string getResourceName()const;
    void _createInstantBuff(std::shared_ptr<AttributeBuff> const&, int, float)const;
    void shutdownEffects();
    void getColor()const;
    void _setDurationModifier(float);
    bool isVisible()const;
    void viewAttributeModifiers()const;
    void initEffects(ResourcePackManager *);
    void getComponentName()const;
    void getByName(std::string const&);
    void getById(int);
    void clearAttributeBuffs();
    void _createTemporalBuff(std::shared_ptr<AttributeBuff> const&, int, int)const;
    void getId()const;
    void addAttributeBuff(Attribute const&, std::shared_ptr<AttributeBuff>);
    std::string formatDuration(MobEffectInstance const*);
    void getIcon()const;
    std::string getDescriptionId()const;
    bool hasIcon()const;
    bool isDisabled()const;
    void _createAttributeModifer(std::shared_ptr<AttributeModifier> const&, int)const;
    void setDurationAmplifier(std::shared_ptr<Amplifier>);
    std::string getIconName()const;
    void addAttributeModifier(Attribute const&, std::shared_ptr<AttributeModifier>);
    MobEffect(int, std::string const&, std::string const&, bool, int, int, std::string const&, bool);
    bool isHarmful()const;
};
