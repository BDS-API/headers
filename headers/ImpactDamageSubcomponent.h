#pragma once

class ImpactDamageSubcomponent : OnHitSubcomponent {

    virtual ~ImpactDamageSubcomponent();
    virtual ~ImpactDamageSubcomponent();
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
}
