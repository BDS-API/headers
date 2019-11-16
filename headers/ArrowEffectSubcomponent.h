#pragma once

class ArrowEffectSubcomponent : MobEffectSubcomponent {

    virtual void ~ArrowEffectSubcomponent();
    virtual void ~ArrowEffectSubcomponent();
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
}
