#pragma once

class AbsorptionMobEffect : MobEffect {

    virtual void Absorption~AbsorptionMobEffect();
    virtual void Absorption~AbsorptionMobEffect();
    virtual void AbsorptionapplyEffects(Actor *, int, int)const;
    virtual void AbsorptionremoveEffects(Actor *);
    virtual void applyInstantaneousEffect(Actor *, Actor *, Actor *, int, float)const;
    virtual void isInstantaneous(void)const;
    virtual void getAttributeModifierValue(int, AttributeModifier const&)const;
}
