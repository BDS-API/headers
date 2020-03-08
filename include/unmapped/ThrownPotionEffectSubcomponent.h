#pragma once

#include "../json/Value"
#include "../bedrock/actor/Actor"


class ThrownPotionEffectSubcomponent : SplashPotionEffectSubcomponent {

public:
    ThrownPotionEffectSubcomponent::~ThrownPotionEffectSubcomponent()
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);

    void getSubcomponentName();
    ThrownPotionEffectSubcomponent(void);
};
