#pragma once

#include "OnHitSubcomponent.h"


class ImpactDamageSubcomponent : OnHitSubcomponent {

public:
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
    ~ImpactDamageSubcomponent();
    virtual void readfromJSON(Json::Value &);
    ImpactDamageSubcomponent();
    void getSubcomponentName();
};
