#pragma once

class OnHitSubcomponent {

    virtual ~OnHitSubcomponent();
    virtual ~OnHitSubcomponent();
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
}
