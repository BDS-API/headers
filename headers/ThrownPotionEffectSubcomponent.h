#pragma once

class ThrownPotionEffectSubcomponent : SplashPotionEffectSubcomponent {

    virtual void ThrownPotionEffectSubcomponent::~ThrownPotionEffectSubcomponent();
    virtual void ThrownPotionEffectSubcomponent::~ThrownPotionEffectSubcomponent();
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
}
