#pragma once

class AttackDamageMobEffect : MobEffect {

public:
    virtual ~AttackDamageMobEffect();
    virtual void getAttributeModifierValue(int, AttributeModifier const&)const;

    void AttackDamageMobEffect(int, std::string const&, std::string const&, bool, int, int);
};
