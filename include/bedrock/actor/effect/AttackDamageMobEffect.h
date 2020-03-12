#pragma once

#include <string>
#include "MobEffect.h"


class AttackDamageMobEffect : MobEffect {

public:
    virtual void getAttributeModifierValue(int, AttributeModifier const&)const;
    ~AttackDamageMobEffect();
    AttackDamageMobEffect(int, std::string const&, std::string const&, bool, int, int);
};
