#pragma once

#include "../bedrock/actor/Actor"
#include "../json/Value"


class ParticleOnHitSubcomponent : OnHitSubcomponent {

public:
    virtual ParticleOnHitSubcomponent::~ParticleOnHitSubcomponent()
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);

    void getSubcomponentName();
    ParticleOnHitSubcomponent(void);
    bool isParticleTypeIconBreak()const;
};
