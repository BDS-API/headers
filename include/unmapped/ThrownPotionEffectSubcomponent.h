#pragma once

#include "ProjectileComponent.h"
#include "../bedrock/actor/Actor.h"
#include "SplashPotionEffectSubcomponent.h"
#include "../json/Value.h"


class ThrownPotionEffectSubcomponent : SplashPotionEffectSubcomponent {

public:
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
    virtual void writetoJSON(Json::Value &)const;
    ~ThrownPotionEffectSubcomponent();
    void getSubcomponentName();
    ThrownPotionEffectSubcomponent();
};
