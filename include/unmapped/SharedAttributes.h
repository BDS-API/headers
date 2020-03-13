#pragma once

#include <string>


namespace SharedAttributes {

    static long HEALTH;
    static long FOLLOW_RANGE;
    static long KNOCKBACK_RESISTANCE;
    static long MOVEMENT_SPEED;
    static long UNDERWATER_MOVEMENT_SPEED;
    static long ATTACK_DAMAGE;
    static long ABSORPTION;
    static long LUCK;
    static long JUMP_STRENGTH;

    void saveAttributes(BaseAttributeMap *); // _ZN16SharedAttributes14saveAttributesEP16BaseAttributeMap
    void _saveAttribute(AttributeInstance const&); // _ZN16SharedAttributes14_saveAttributeERK17AttributeInstance
    void _saveAttributeModifier(AttributeModifier const&); // _ZN16SharedAttributes22_saveAttributeModifierERK17AttributeModifier
    void _saveAttributeBuff(TemporalAttributeBuff const&); // _ZN16SharedAttributes18_saveAttributeBuffERK21TemporalAttributeBuff
    void loadAttributes(BaseAttributeMap *, ListTag const*); // _ZN16SharedAttributes14loadAttributesEP16BaseAttributeMapPK7ListTag
    void checkIsDeprecated(std::string &); // _ZN16SharedAttributes17checkIsDeprecatedERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void _legacyGetName(std::string const&); // _ZN16SharedAttributes14_legacyGetNameERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void _legacyGetInstance(BaseAttributeMap *, std::string const&); // _ZN16SharedAttributes18_legacyGetInstanceEP16BaseAttributeMapRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void _loadAttribute(AttributeInstance &, CompoundTag const*); // _ZN16SharedAttributes14_loadAttributeER17AttributeInstancePK11CompoundTag
    void loadAttributeModifier(CompoundTag const*); // _ZN16SharedAttributes21loadAttributeModifierEPK11CompoundTag
    void loadAttributeBuff(CompoundTag const*); // _ZN16SharedAttributes17loadAttributeBuffEPK11CompoundTag
};
