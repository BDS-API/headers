#pragma once

#include "../bedrock/actor/attribute/AttributeModifier"
#include "../bedrock/nbt/CompoundTag"
#include "../bedrock/nbt/ListTag"
#include "../bedrock/actor/attribute/AttributeInstance"
#include "../bedrock/actor/attribute/TemporalAttributeBuff"


class SharedAttributes {

public:
    static long HEALTH;
    static long FOLLOW_RANGE;
    static long KNOCKBACK_RESISTANCE;
    static long MOVEMENT_SPEED;
    static long UNDERWATER_MOVEMENT_SPEED;
    static long ATTACK_DAMAGE;
    static long ABSORPTION;
    static long LUCK;
    static long JUMP_STRENGTH;


    void saveAttributes(BaseAttributeMap *);
    void _saveAttribute(AttributeInstance const&);
    void _saveAttributeModifier(AttributeModifier const&);
    void _saveAttributeBuff(TemporalAttributeBuff const&);
    void loadAttributes(BaseAttributeMap *, ListTag const*);
    void checkIsDeprecated(std::string &);
    void _legacyGetName(std::string const&);
    void _legacyGetInstance(BaseAttributeMap *, std::string const&);
    void _loadAttribute(AttributeInstance &, CompoundTag const*);
    void loadAttributeModifier(CompoundTag const*);
    void loadAttributeBuff(CompoundTag const*);
};
