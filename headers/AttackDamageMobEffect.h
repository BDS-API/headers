#pragma once

class AttackDamageMobEffect : MobEffect {

    virtual void AttackDamageMobEffect::~AttackDamageMobEffect();
    virtual void AttackDamageMobEffect::~AttackDamageMobEffect();
    virtual void applyEffects(Actor *, int, int)const;
    virtual void removeEffects(Actor *);
    virtual void applyInstantaneousEffect(Actor *, Actor *, Actor *, int, float)const;
    virtual void isInstantaneous(void)const;
    virtual void getAttributeModifierValue(int, AttributeModifier const&)const;
}
