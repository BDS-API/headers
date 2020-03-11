#pragma once

#include "./MobEffect.h"
#include "../attribute/AttributeModifier.h"
#include <string>


class AttackDamageMobEffect : MobEffect {

public:
    virtual ~AttackDamageMobEffect();
    virtual void getAttributeModifierValue(int, AttributeModifier const&)const;

    AttackDamageMobEffect(int, std::string const&, std::string const&, bool, int, int);
};
