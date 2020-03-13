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

    ~MobEffect(); // _ZN9MobEffectD2Ev
    virtual void applyEffects(Actor *, int, int)const; // _ZNK9MobEffect12applyEffectsEP5Actorii
    virtual void removeEffects(Actor *); // _ZN9MobEffect13removeEffectsEP5Actor
    virtual void applyInstantaneousEffect(Actor *, Actor *, Actor *, int, float)const; // _ZNK9MobEffect24applyInstantaneousEffectEP5ActorS1_S1_if
    virtual bool isInstantaneous()const; // _ZNK9MobEffect15isInstantaneousEv
    virtual void getAttributeModifierValue(int, AttributeModifier const&)const; // _ZNK9MobEffect25getAttributeModifierValueEiRK17AttributeModifier
    void initEffects(ResourcePackManager *); // _ZN9MobEffect11initEffectsEP19ResourcePackManager
    void addAttributeModifier(Attribute const&, std::shared_ptr<AttributeModifier>); // _ZN9MobEffect20addAttributeModifierERK9AttributeSt10shared_ptrI17AttributeModifierE
    void addAttributeBuff(Attribute const&, std::shared_ptr<AttributeBuff>); // _ZN9MobEffect16addAttributeBuffERK9AttributeSt10shared_ptrI13AttributeBuffE
    void setValueAmplifier(std::shared_ptr<Amplifier>); // _ZN9MobEffect17setValueAmplifierESt10shared_ptrI9AmplifierE
    void setDurationAmplifier(std::shared_ptr<Amplifier>); // _ZN9MobEffect20setDurationAmplifierESt10shared_ptrI9AmplifierE
    void shutdownEffects(); // _ZN9MobEffect15shutdownEffectsEv
    void getByName(std::string const&); // _ZN9MobEffect9getByNameERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getById(int); // _ZN9MobEffect7getByIdEi
    void getId()const; // _ZNK9MobEffect5getIdEv
    void getComponentName()const; // _ZNK9MobEffect16getComponentNameEv
    MobEffect(int, std::string const&, std::string const&, bool, int, int, std::string const&, bool); // _ZN9MobEffectC2EiRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_biiS7_b
    std::string getResourceName()const; // _ZNK9MobEffect15getResourceNameB5cxx11Ev
    std::string getIconName()const; // _ZNK9MobEffect11getIconNameB5cxx11Ev
    void _createInstantBuff(std::shared_ptr<AttributeBuff> const&, int, float)const; // _ZNK9MobEffect18_createInstantBuffERKSt10shared_ptrI13AttributeBuffEif
    void _createTemporalBuff(std::shared_ptr<AttributeBuff> const&, int, int)const; // _ZNK9MobEffect19_createTemporalBuffERKSt10shared_ptrI13AttributeBuffEii
    void _createAttributeModifer(std::shared_ptr<AttributeModifier> const&, int)const; // _ZNK9MobEffect23_createAttributeModiferERKSt10shared_ptrI17AttributeModifierEi
    bool isHarmful()const; // _ZNK9MobEffect9isHarmfulEv
    std::string getDescriptionId()const; // _ZNK9MobEffect16getDescriptionIdB5cxx11Ev
    bool hasIcon()const; // _ZNK9MobEffect7hasIconEv
    void getIcon()const; // _ZNK9MobEffect7getIconEv
    void getDurationModifier()const; // _ZNK9MobEffect19getDurationModifierEv
    bool isDisabled()const; // _ZNK9MobEffect10isDisabledEv
    void getColor()const; // _ZNK9MobEffect8getColorEv
    bool isVisible()const; // _ZNK9MobEffect9isVisibleEv
    std::string formatDuration(MobEffectInstance const*); // _ZN9MobEffect14formatDurationB5cxx11EPK17MobEffectInstance
    void clearAttributeBuffs(); // _ZN9MobEffect19clearAttributeBuffsEv
    void clearAttributeModifiers(); // _ZN9MobEffect23clearAttributeModifiersEv
    void viewAttributeModifiers()const; // _ZNK9MobEffect22viewAttributeModifiersEv
    void _setDurationModifier(float); // _ZN9MobEffect20_setDurationModifierEf
};
