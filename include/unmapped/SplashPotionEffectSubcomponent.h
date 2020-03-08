#pragma once

#include "../json/Value"
#include "../bedrock/actor/Actor"


class SplashPotionEffectSubcomponent : OnHitSubcomponent {

public:
    virtual SplashPotionEffectSubcomponent::~SplashPotionEffectSubcomponent();
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);

    SplashPotionEffectSubcomponent(void);
    void applyMobEffects(MobEffectInstance const&, std::vector<Actor *, std::allocator<Actor *>> const&, Actor&, std::shared_ptr<Potion const> const&, float, MobEffect *, HitResult &, int);
};
