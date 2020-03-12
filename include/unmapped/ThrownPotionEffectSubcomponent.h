#pragma once

#include "SplashPotionEffectSubcomponent.h"


class ThrownPotionEffectSubcomponent : SplashPotionEffectSubcomponent {

public:
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
    virtual void writetoJSON(Json::Value &)const;
    ~ThrownPotionEffectSubcomponent();
    ThrownPotionEffectSubcomponent();
    void getSubcomponentName();
};
