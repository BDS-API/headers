#pragma once

#include "OnHitSubcomponent.h"


class ParticleOnHitSubcomponent : OnHitSubcomponent {

public:
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
    virtual void readfromJSON(Json::Value &);
    ~ParticleOnHitSubcomponent();
    ParticleOnHitSubcomponent();
    void getSubcomponentName();
    bool isParticleTypeIconBreak()const;
};
