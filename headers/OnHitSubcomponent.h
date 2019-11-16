#pragma once

class OnHitSubcomponent {

    virtual void ~OnHitSubcomponent();
    virtual void ~OnHitSubcomponent();
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
}
