#pragma once

#include "OnHitSubcomponent.h"


class SpawnChanceSubcomponent : OnHitSubcomponent {

public:
    ~SpawnChanceSubcomponent(); // _ZN23SpawnChanceSubcomponentD2Ev
    virtual void readfromJSON(Json::Value &); // _ZN23SpawnChanceSubcomponent12readfromJSONERN4Json5ValueE
    virtual void writetoJSON(Json::Value &)const; // _ZNK23SpawnChanceSubcomponent11writetoJSONERN4Json5ValueE
    virtual void doOnHitEffect(Actor &, ProjectileComponent &); // _ZN23SpawnChanceSubcomponent13doOnHitEffectER5ActorR19ProjectileComponent
    void getSubcomponentName(); // _ZN23SpawnChanceSubcomponent19getSubcomponentNameEv
    SpawnChanceSubcomponent(); // _ZN23SpawnChanceSubcomponentC2Ev
};
