#pragma once

#include "../bedrock/actor/Actor"
#include "../json/Value"


class ThrownPotionEffectSubcomponent : SplashPotionEffectSubcomponent {

public:
    virtual ThrownPotionEffectSubcomponent::~ThrownPotionEffectSubcomponent()
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);

    void getSubcomponentName();
    ThrownPotionEffectSubcomponent(void);
};
