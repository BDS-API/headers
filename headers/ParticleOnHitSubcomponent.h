#pragma once

class ParticleOnHitSubcomponent : OnHitSubcomponent {

    virtual void Particle~ParticleOnHitSubcomponent();
    virtual void Particle~ParticleOnHitSubcomponent();
    virtual void ParticlereadfromJSON(Json::Value &);
    virtual void ParticlewritetoJSON(Json::Value &)const;
    virtual void ParticledoOnHitEffect(Actor &, ProjectileComponent &);
}
