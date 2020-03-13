#pragma once

#include "OnHitSubcomponent.h"


class ImpactDamageSubcomponent : OnHitSubcomponent {

public:
    ~ImpactDamageSubcomponent(); // _ZN24ImpactDamageSubcomponentD2Ev
    virtual void readfromJSON(Json::Value &); // _ZN24ImpactDamageSubcomponent12readfromJSONERN4Json5ValueE
    virtual void writetoJSON(Json::Value &)const; // _ZNK24ImpactDamageSubcomponent11writetoJSONERN4Json5ValueE
    virtual void doOnHitEffect(Actor &, ProjectileComponent &); // _ZN24ImpactDamageSubcomponent13doOnHitEffectER5ActorR19ProjectileComponent
    void getSubcomponentName(); // _ZN24ImpactDamageSubcomponent19getSubcomponentNameEv
    ImpactDamageSubcomponent(); // _ZN24ImpactDamageSubcomponentC2Ev
};
