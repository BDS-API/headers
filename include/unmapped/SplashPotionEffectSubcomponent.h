#pragma once

#include <memory>
#include <vector>
#include "OnHitSubcomponent.h"


class SplashPotionEffectSubcomponent : OnHitSubcomponent {

public:
    virtual void readfromJSON(Json::Value &);
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
    ~SplashPotionEffectSubcomponent();
    virtual void writetoJSON(Json::Value &)const;
    void applyMobEffects(MobEffectInstance const&, std::vector<Actor *> const&, Actor &, std::shared_ptr<Potion const> const&, float, MobEffect *, HitResult &, int);
    SplashPotionEffectSubcomponent();
};
