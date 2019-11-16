#pragma once

class IgniteSubcomponent : OnHitSubcomponent {

    virtual void ~IgniteSubcomponent();
    virtual void ~IgniteSubcomponent();
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
}
