#pragma once

class SharedAttributes {

public:
    static long SharedAttributes::HEALTH;
    static long SharedAttributes::FOLLOW_RANGE;
    static long SharedAttributes::KNOCKBACK_RESISTANCE;
    static long SharedAttributes::MOVEMENT_SPEED;
    static long SharedAttributes::UNDERWATER_MOVEMENT_SPEED;
    static long SharedAttributes::ATTACK_DAMAGE;
    static long SharedAttributes::ABSORPTION;
    static long SharedAttributes::LUCK;
    static long SharedAttributes::JUMP_STRENGTH;


    void saveAttributes(BaseAttributeMap *);
    void _saveAttribute(AttributeInstance const&);
    void _saveAttributeModifier(AttributeModifier const&);
    void _saveAttributeBuff(TemporalAttributeBuff const&);
    void loadAttributes(BaseAttributeMap *, ListTag const*);
    void checkIsDeprecated(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &);
    void _legacyGetName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void _legacyGetInstance(BaseAttributeMap *, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void _loadAttribute(AttributeInstance &, CompoundTag const*);
    void loadAttributeModifier(CompoundTag const*);
    void loadAttributeBuff(CompoundTag const*);
};
