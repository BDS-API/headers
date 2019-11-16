#pragma once

class MobEffectSubcomponent : OnHitSubcomponent {

    virtual void ~MobEffectSubcomponent();
    virtual void ~MobEffectSubcomponent();
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
}
