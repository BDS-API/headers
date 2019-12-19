#pragma once

class ArrowEffectSubcomponent : MobEffectSubcomponent {

public:
    virtual ArrowEffectSubcomponent::~ArrowEffectSubcomponent();
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);

    void getSubcomponentName(void);
    ArrowEffectSubcomponent(void);
};
