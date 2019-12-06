#pragma once

class SplashPotionEffectSubcomponent : OnHitSubcomponent {

public:
    virtual ~SplashPotionEffectSubcomponent();
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);

    void SplashPotionEffectSubcomponent(void);
    void applyMobEffects(MobEffectInstance const&, std::vector<Actor *, std::allocator<Actor *>> const&, Actor&, std::shared_ptr<Potion const> const&, float, MobEffect *, HitResult &, int);
};
