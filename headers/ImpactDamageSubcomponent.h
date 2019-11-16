#pragma once

class ImpactDamageSubcomponent : OnHitSubcomponent {

    virtual void ImpactDamageSubcomponent::~ImpactDamageSubcomponent();
    virtual void ImpactDamageSubcomponent::~ImpactDamageSubcomponent();
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
}
