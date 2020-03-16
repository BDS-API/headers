#pragma once

#include "OnHitSubcomponent.h"


class RemoveOnHitSubcomponent : public OnHitSubcomponent {

public:
    virtual ~RemoveOnHitSubcomponent(); // _ZN23RemoveOnHitSubcomponentD2Ev
    virtual void __fake_function0(); // fake
    virtual void readfromJSON(Json::Value &); // _ZN23RemoveOnHitSubcomponent12readfromJSONERN4Json5ValueE
    virtual void writetoJSON(Json::Value &)const; // _ZNK23RemoveOnHitSubcomponent11writetoJSONERN4Json5ValueE
    virtual void doOnHitEffect(Actor &, ProjectileComponent &); // _ZN23RemoveOnHitSubcomponent13doOnHitEffectER5ActorR19ProjectileComponent
    void getSubcomponentName(); // _ZN23RemoveOnHitSubcomponent19getSubcomponentNameEv
    RemoveOnHitSubcomponent(); // _ZN23RemoveOnHitSubcomponentC2Ev
};
