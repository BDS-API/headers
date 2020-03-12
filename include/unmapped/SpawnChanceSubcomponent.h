#pragma once

#include "OnHitSubcomponent.h"


class SpawnChanceSubcomponent : OnHitSubcomponent {

public:
    ~SpawnChanceSubcomponent();
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void readfromJSON(Json::Value &);
    SpawnChanceSubcomponent();
    void getSubcomponentName();
};
