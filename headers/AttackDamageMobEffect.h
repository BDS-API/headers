#pragma once

class AttackDamageMobEffect : MobEffect {

public:
    virtual ~AttackDamageMobEffect();
    virtual void getAttributeModifierValue(int, AttributeModifier const&)const;

    void AttackDamageMobEffect(int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool, int, int);
};
