#pragma once

class InstantaneousMobEffect : MobEffect {

    virtual void Instantaneous~InstantaneousMobEffect();
    virtual void Instantaneous~InstantaneousMobEffect();
    virtual void applyEffects(Actor *, int, int)const;
    virtual void removeEffects(Actor *);
    virtual void applyInstantaneousEffect(Actor *, Actor *, Actor *, int, float)const;
    virtual void InstantaneousisInstantaneous(void)const;
    virtual void getAttributeModifierValue(int, AttributeModifier const&)const;
    virtual void InstantaneousisDurationEffectTick(int, int)const;
}
