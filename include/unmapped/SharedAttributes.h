#pragma once

#include "../bedrock/nbt/CompoundTag.h"
#include <string>
#include "../bedrock/actor/attribute/AttributeModifier.h"
#include "BaseAttributeMap.h"
#include "../bedrock/nbt/ListTag.h"
#include "../bedrock/actor/attribute/TemporalAttributeBuff.h"
#include "../bedrock/actor/attribute/AttributeInstance.h"


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

    void _saveAttributeModifier(AttributeModifier const&);
    void _legacyGetName(std::string const&);
    void _legacyGetInstance(BaseAttributeMap *, std::string const&);
    void _saveAttribute(AttributeInstance const&);
    void loadAttributeBuff(CompoundTag const*);
    void loadAttributeModifier(CompoundTag const*);
    void saveAttributes(BaseAttributeMap *);
    void checkIsDeprecated(std::string &);
    void _saveAttributeBuff(TemporalAttributeBuff const&);
    void loadAttributes(BaseAttributeMap *, ListTag const*);
    void _loadAttribute(AttributeInstance &, CompoundTag const*);
};
