#pragma once

#include "../json/Value"
#include "../bedrock/actor/Actor"


class SpawnChanceSubcomponent : OnHitSubcomponent {

public:
    SpawnChanceSubcomponent::~SpawnChanceSubcomponent()
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);

    void getSubcomponentName();
    SpawnChanceSubcomponent(void);
};
