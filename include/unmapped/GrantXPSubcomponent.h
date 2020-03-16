#pragma once

#include "OnHitSubcomponent.h"


class GrantXPSubcomponent : public OnHitSubcomponent {

public:
    virtual ~GrantXPSubcomponent(); // _ZN19GrantXPSubcomponentD2Ev
    virtual void __fake_function0(); // fake
    virtual void readfromJSON(Json::Value &); // _ZN19GrantXPSubcomponent12readfromJSONERN4Json5ValueE
    virtual void writetoJSON(Json::Value &)const; // _ZNK19GrantXPSubcomponent11writetoJSONERN4Json5ValueE
    virtual void doOnHitEffect(Actor &, ProjectileComponent &); // _ZN19GrantXPSubcomponent13doOnHitEffectER5ActorR19ProjectileComponent
    void getSubcomponentName(); // _ZN19GrantXPSubcomponent19getSubcomponentNameEv
    GrantXPSubcomponent(); // _ZN19GrantXPSubcomponentC2Ev
};
