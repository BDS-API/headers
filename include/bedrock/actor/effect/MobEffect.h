#pragma once

#include "../Actor.h"
#include "../../../unmapped/Amplifier.h"
#include "../../../unmapped/MobEffectInstance.h"
#include <memory>
#include "../../../unmapped/Attribute.h"
#include "../../pack/ResourcePackManager.h"
#include "../attribute/AttributeModifier.h"
#include "../attribute/AttributeBuff.h"
#include <string>


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

    virtual ~MobEffect();
    virtual void applyEffects(Actor *, int, int)const;
    virtual void removeEffects(Actor *);
    virtual void applyInstantaneousEffect(Actor *, Actor *, Actor *, int, float)const;
    virtual bool isInstantaneous()const;
    virtual void getAttributeModifierValue(int, AttributeModifier const&)const;

    void initEffects(ResourcePackManager *);
    void addAttributeModifier(Attribute const&, std::shared_ptr<AttributeModifier>);
    void addAttributeBuff(Attribute const&, std::shared_ptr<AttributeBuff>);
    void setValueAmplifier(std::shared_ptr<Amplifier>);
    void setDurationAmplifier(std::shared_ptr<Amplifier>);
    void shutdownEffects();
    void getByName(std::string const&);
    void getById(int);
    void getId()const;
    void getComponentName()const;
    MobEffect(int, std::string const&, std::string const&, bool, int, int, std::string const&, bool);
    std::string getResourceName()const;
    std::string getIconName()const;
    void _createInstantBuff(std::shared_ptr<AttributeBuff> const&, int, float)const;
    void _createTemporalBuff(std::shared_ptr<AttributeBuff> const&, int, int)const;
    void _createAttributeModifer(std::shared_ptr<AttributeModifier> const&, int)const;
    bool isHarmful()const;
    std::string getDescriptionId()const;
    bool hasIcon()const;
    void getIcon()const;
    void getDurationModifier()const;
    bool isDisabled()const;
    void getColor()const;
    bool isVisible()const;
    std::string formatDuration(MobEffectInstance const*);
    void clearAttributeBuffs();
    void clearAttributeModifiers();
    void viewAttributeModifiers()const;
    void _setDurationModifier(float);
};
