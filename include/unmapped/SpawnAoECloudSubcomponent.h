#pragma once

#include "../bedrock/actor/Actor"
#include "../json/Value"


class SpawnAoECloudSubcomponent : OnHitSubcomponent {

public:
    virtual SpawnAoECloudSubcomponent::~SpawnAoECloudSubcomponent()
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);

    void getSubcomponentName();
    SpawnAoECloudSubcomponent(void);
};
