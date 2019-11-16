#pragma once

class SplashPotionEffectSubcomponent : OnHitSubcomponent {

    virtual void ~SplashPotionEffectSubcomponent();
    virtual void ~SplashPotionEffectSubcomponent();
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
}
