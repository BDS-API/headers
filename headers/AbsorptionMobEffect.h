#pragma once

class AbsorptionMobEffect : MobEffect {

    virtual ~AbsorptionMobEffect();
    virtual ~AbsorptionMobEffect();
    virtual void applyEffects(Actor *, int, int)const;
    virtual void removeEffects(Actor *);
    virtual void applyInstantaneousEffect(Actor *, Actor *, Actor *, int, float)const;
    virtual void isInstantaneous(void)const;
    virtual void getAttributeModifierValue(int, AttributeModifier const&)const;
}
