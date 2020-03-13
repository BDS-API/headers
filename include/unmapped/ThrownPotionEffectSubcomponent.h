#pragma once

#include "SplashPotionEffectSubcomponent.h"


class ThrownPotionEffectSubcomponent : SplashPotionEffectSubcomponent {

public:
    ~ThrownPotionEffectSubcomponent(); // _ZN30ThrownPotionEffectSubcomponentD2Ev
    virtual void writetoJSON(Json::Value &)const; // _ZNK30ThrownPotionEffectSubcomponent11writetoJSONERN4Json5ValueE
    virtual void doOnHitEffect(Actor &, ProjectileComponent &); // _ZN30ThrownPotionEffectSubcomponent13doOnHitEffectER5ActorR19ProjectileComponent
    void getSubcomponentName(); // _ZN30ThrownPotionEffectSubcomponent19getSubcomponentNameEv
    ThrownPotionEffectSubcomponent(); // _ZN30ThrownPotionEffectSubcomponentC2Ev
};
