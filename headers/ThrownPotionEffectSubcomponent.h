#pragma once

class ThrownPotionEffectSubcomponent : SplashPotionEffectSubcomponent {

public:
    virtual ~ThrownPotionEffectSubcomponent();
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);

    void getSubcomponentName(void);
    void ThrownPotionEffectSubcomponent(void);
};
