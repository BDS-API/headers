#pragma once

class ParticleOnHitSubcomponent : OnHitSubcomponent {

    virtual void ParticleOnHitSubcomponent::~ParticleOnHitSubcomponent();
    virtual void ParticleOnHitSubcomponent::~ParticleOnHitSubcomponent();
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
}
