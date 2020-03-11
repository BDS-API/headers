#pragma once

#include "./ProjectileComponent.h"
#include "../bedrock/actor/Actor.h"
#include "./SplashPotionEffectSubcomponent.h"
#include "../json/Value.h"


class ThrownPotionEffectSubcomponent : SplashPotionEffectSubcomponent {

public:
    virtual ~ThrownPotionEffectSubcomponent();
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);

    void getSubcomponentName();
    ThrownPotionEffectSubcomponent();
};
