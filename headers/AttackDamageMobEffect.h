#pragma once

class AttackDamageMobEffect : MobEffect {

    virtual void AttackDamage~AttackDamageMobEffect();
    virtual void AttackDamage~AttackDamageMobEffect();
    virtual void applyEffects(Actor *, int, int)const;
    virtual void removeEffects(Actor *);
    virtual void applyInstantaneousEffect(Actor *, Actor *, Actor *, int, float)const;
    virtual void isInstantaneous(void)const;
    virtual void AttackDamagegetAttributeModifierValue(int, AttributeModifier const&)const;
}
