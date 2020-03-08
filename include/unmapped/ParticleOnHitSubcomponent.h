#pragma once

#include "../json/Value"
#include "../bedrock/actor/Actor"


class ParticleOnHitSubcomponent : OnHitSubcomponent {

public:
    virtual ParticleOnHitSubcomponent::~ParticleOnHitSubcomponent();
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);

    void getSubcomponentName(void);
    ParticleOnHitSubcomponent(void);
    bool isParticleTypeIconBreak(void)const;
};
