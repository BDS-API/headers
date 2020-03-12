#pragma once

#include "OnHitSubcomponent.h"


class SpawnAoECloudSubcomponent : OnHitSubcomponent {

public:
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    ~SpawnAoECloudSubcomponent();
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
    void getSubcomponentName();
    SpawnAoECloudSubcomponent();
};
