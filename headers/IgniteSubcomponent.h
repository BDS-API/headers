#pragma once

class IgniteSubcomponent : OnHitSubcomponent {

    virtual ~IgniteSubcomponent();
    virtual ~IgniteSubcomponent();
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
}
