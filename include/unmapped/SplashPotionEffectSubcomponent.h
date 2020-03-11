#pragma once

#include "./HitResult.h"
#include "./Potion.h"
#include "./OnHitSubcomponent.h"
#include "../bedrock/actor/effect/MobEffect.h"
#include "../json/Value.h"
#include <memory>
#include "./ProjectileComponent.h"
#include "../bedrock/actor/Actor.h"
#include <vector>
#include "./MobEffectInstance.h"


class SplashPotionEffectSubcomponent : OnHitSubcomponent {

public:
    virtual ~SplashPotionEffectSubcomponent();
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);

    SplashPotionEffectSubcomponent();
    void applyMobEffects(MobEffectInstance const&, std::vector<Actor *, std::allocator<Actor *>> const&, Actor &, std::shared_ptr<Potion const> const&, float, MobEffect *, HitResult &, int);
};
