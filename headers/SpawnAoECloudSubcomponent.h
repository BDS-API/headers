#pragma once

class SpawnAoECloudSubcomponent : OnHitSubcomponent {

    virtual void ~SpawnAoECloudSubcomponent();
    virtual void ~SpawnAoECloudSubcomponent();
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
}
