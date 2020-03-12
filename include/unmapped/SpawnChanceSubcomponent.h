#pragma once

#include "ProjectileComponent.h"
#include "../bedrock/actor/Actor.h"
#include "OnHitSubcomponent.h"
#include "../json/Value.h"


class SpawnChanceSubcomponent : OnHitSubcomponent {

public:
    virtual void writetoJSON(Json::Value &)const;
    virtual void readfromJSON(Json::Value &);
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
    ~SpawnChanceSubcomponent();
    void getSubcomponentName();
    SpawnChanceSubcomponent();
};
