#pragma once

class ThrownPotionEffectSubcomponent : SplashPotionEffectSubcomponent {

public:
    virtual ThrownPotionEffectSubcomponent::~ThrownPotionEffectSubcomponent();
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);

    void getSubcomponentName(void);
    ThrownPotionEffectSubcomponent(void);
};
