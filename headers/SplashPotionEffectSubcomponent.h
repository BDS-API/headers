#pragma once

class SplashPotionEffectSubcomponent : OnHitSubcomponent {

    virtual ~SplashPotionEffectSubcomponent();
    virtual ~SplashPotionEffectSubcomponent();
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
}
