#pragma once

class ParticleOnHitSubcomponent : OnHitSubcomponent {

    virtual ~ParticleOnHitSubcomponent();
    virtual ~ParticleOnHitSubcomponent();
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
}
