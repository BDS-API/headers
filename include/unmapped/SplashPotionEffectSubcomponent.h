#pragma once

#include "../bedrock/actor/Actor.h"
#include "MobEffectInstance.h"
#include "Potion.h"
#include "HitResult.h"
#include "../bedrock/actor/effect/MobEffect.h"
#include "../json/Value.h"
#include "ProjectileComponent.h"
#include <vector>
#include "OnHitSubcomponent.h"
#include <memory>


class SplashPotionEffectSubcomponent : OnHitSubcomponent {

public:
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    ~SplashPotionEffectSubcomponent();
    SplashPotionEffectSubcomponent();
    void applyMobEffects(MobEffectInstance const&, std::vector<Actor *> const&, Actor &, std::shared_ptr<Potion const> const&, float, MobEffect *, HitResult &, int);
};
