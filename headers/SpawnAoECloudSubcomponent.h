#pragma once

class SpawnAoECloudSubcomponent : OnHitSubcomponent {

    virtual ~SpawnAoECloudSubcomponent();
    virtual ~SpawnAoECloudSubcomponent();
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
}
