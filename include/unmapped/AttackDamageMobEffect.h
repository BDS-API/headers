#pragma once

class AttackDamageMobEffect : MobEffect {

public:
    virtual AttackDamageMobEffect::~AttackDamageMobEffect();
    virtual void getAttributeModifierValue(int, AttributeModifier const&)const;

    AttackDamageMobEffect(int, std::string const&, std::string const&, bool, int, int);
};
