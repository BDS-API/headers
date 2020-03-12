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

    void _saveAttribute(AttributeInstance const&);
    void _legacyGetInstance(BaseAttributeMap *, std::string const&);
    void _legacyGetName(std::string const&);
    void _saveAttributeModifier(AttributeModifier const&);
    void loadAttributes(BaseAttributeMap *, ListTag const*);
    void _loadAttribute(AttributeInstance &, CompoundTag const*);
    void loadAttributeBuff(CompoundTag const*);
    void checkIsDeprecated(std::string &);
    void _saveAttributeBuff(TemporalAttributeBuff const&);
    void saveAttributes(BaseAttributeMap *);
    void loadAttributeModifier(CompoundTag const*);
};
