#pragma once

#include "OnHitSubcomponent.h"


class IgniteSubcomponent : public OnHitSubcomponent {

public:
    virtual ~IgniteSubcomponent(); // _ZN18IgniteSubcomponentD2Ev
    virtual void __fake_function0(); // fake
    virtual void readfromJSON(Json::Value &); // _ZN18IgniteSubcomponent12readfromJSONERN4Json5ValueE
    virtual void writetoJSON(Json::Value &)const; // _ZNK18IgniteSubcomponent11writetoJSONERN4Json5ValueE
    virtual void doOnHitEffect(Actor &, ProjectileComponent &); // _ZN18IgniteSubcomponent13doOnHitEffectER5ActorR19ProjectileComponent
    void getSubcomponentName(); // _ZN18IgniteSubcomponent19getSubcomponentNameEv
    IgniteSubcomponent(); // _ZN18IgniteSubcomponentC2Ev
};
