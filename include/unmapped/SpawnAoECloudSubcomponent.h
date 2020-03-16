#pragma once

#include "OnHitSubcomponent.h"


class SpawnAoECloudSubcomponent : public OnHitSubcomponent {

public:
    virtual ~SpawnAoECloudSubcomponent(); // _ZN25SpawnAoECloudSubcomponentD2Ev
    virtual void __fake_function0(); // fake
    virtual void readfromJSON(Json::Value &); // _ZN25SpawnAoECloudSubcomponent12readfromJSONERN4Json5ValueE
    virtual void writetoJSON(Json::Value &)const; // _ZNK25SpawnAoECloudSubcomponent11writetoJSONERN4Json5ValueE
    virtual void doOnHitEffect(Actor &, ProjectileComponent &); // _ZN25SpawnAoECloudSubcomponent13doOnHitEffectER5ActorR19ProjectileComponent
    void getSubcomponentName(); // _ZN25SpawnAoECloudSubcomponent19getSubcomponentNameEv
    SpawnAoECloudSubcomponent(); // _ZN25SpawnAoECloudSubcomponentC2Ev
};
