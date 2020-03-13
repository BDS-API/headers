#pragma once

#include "OnHitSubcomponent.h"


class CatchFireSubcomponent : OnHitSubcomponent {

public:
    ~CatchFireSubcomponent(); // _ZN21CatchFireSubcomponentD2Ev
    virtual void readfromJSON(Json::Value &); // _ZN21CatchFireSubcomponent12readfromJSONERN4Json5ValueE
    virtual void writetoJSON(Json::Value &)const; // _ZNK21CatchFireSubcomponent11writetoJSONERN4Json5ValueE
    virtual void doOnHitEffect(Actor &, ProjectileComponent &); // _ZN21CatchFireSubcomponent13doOnHitEffectER5ActorR19ProjectileComponent
    void getSubcomponentName(); // _ZN21CatchFireSubcomponent19getSubcomponentNameEv
    CatchFireSubcomponent(); // _ZN21CatchFireSubcomponentC2Ev
};
