#pragma once

#include "../json/Value"
#include "../bedrock/actor/Actor"


class SpawnAoECloudSubcomponent : OnHitSubcomponent {

public:
    SpawnAoECloudSubcomponent::~SpawnAoECloudSubcomponent()
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);

    void getSubcomponentName();
    SpawnAoECloudSubcomponent(void);
};
