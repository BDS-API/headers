#pragma once

#include "OnHitSubcomponent.h"


class HurtOwnerSubcomponent : OnHitSubcomponent {

public:
    ~HurtOwnerSubcomponent(); // _ZN21HurtOwnerSubcomponentD2Ev
    virtual void readfromJSON(Json::Value &); // _ZN21HurtOwnerSubcomponent12readfromJSONERN4Json5ValueE
    virtual void writetoJSON(Json::Value &)const; // _ZNK21HurtOwnerSubcomponent11writetoJSONERN4Json5ValueE
    virtual void doOnHitEffect(Actor &, ProjectileComponent &); // _ZN21HurtOwnerSubcomponent13doOnHitEffectER5ActorR19ProjectileComponent
    void getSubcomponentName(); // _ZN21HurtOwnerSubcomponent19getSubcomponentNameEv
    HurtOwnerSubcomponent(); // _ZN21HurtOwnerSubcomponentC2Ev
};
