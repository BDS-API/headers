#pragma once

class SpawnAoECloudSubcomponent : OnHitSubcomponent {

    virtual void SpawnAoECloudSubcomponent::~SpawnAoECloudSubcomponent();
    virtual void SpawnAoECloudSubcomponent::~SpawnAoECloudSubcomponent();
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
}
