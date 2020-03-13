#pragma once

#include <memory>
#include "OnHitSubcomponent.h"
#include <vector>


class SplashPotionEffectSubcomponent : OnHitSubcomponent {

public:
    ~SplashPotionEffectSubcomponent(); // _ZN30SplashPotionEffectSubcomponentD2Ev
    virtual void readfromJSON(Json::Value &); // _ZN30SplashPotionEffectSubcomponent12readfromJSONERN4Json5ValueE
    virtual void writetoJSON(Json::Value &)const; // _ZNK30SplashPotionEffectSubcomponent11writetoJSONERN4Json5ValueE
    virtual void doOnHitEffect(Actor &, ProjectileComponent &); // _ZN30SplashPotionEffectSubcomponent13doOnHitEffectER5ActorR19ProjectileComponent
    SplashPotionEffectSubcomponent(); // _ZN30SplashPotionEffectSubcomponentC2Ev
    void applyMobEffects(MobEffectInstance const&, std::vector<Actor *> const&, Actor &, std::shared_ptr<Potion const> const&, float, MobEffect *, HitResult &, int); // _ZN30SplashPotionEffectSubcomponent15applyMobEffectsERK17MobEffectInstanceRKSt6vectorIP5ActorSaIS5_EERS4_RKSt10shared_ptrIK6PotionEfP9MobEffectR9HitResulti
};
