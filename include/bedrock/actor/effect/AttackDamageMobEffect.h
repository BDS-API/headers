#pragma once

#include "../attribute/AttributeModifier"


class AttackDamageMobEffect : MobEffect {

public:
    AttackDamageMobEffect::~AttackDamageMobEffect()
    virtual void getAttributeModifierValue(int, AttributeModifier const&)const;

    AttackDamageMobEffect(int, std::string const&, std::string const&, bool, int, int);
};
