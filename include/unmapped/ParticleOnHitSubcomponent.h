#pragma once

#include "../json/Value"
#include "../bedrock/actor/Actor"


class ParticleOnHitSubcomponent : OnHitSubcomponent {

public:
    ParticleOnHitSubcomponent::~ParticleOnHitSubcomponent()
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);

    void getSubcomponentName();
    ParticleOnHitSubcomponent(void);
    bool isParticleTypeIconBreak()const;
};
