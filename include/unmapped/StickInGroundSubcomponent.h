#pragma once

#include "OnHitSubcomponent.h"


class StickInGroundSubcomponent : public OnHitSubcomponent {

public:
    virtual ~StickInGroundSubcomponent(); // _ZN25StickInGroundSubcomponentD2Ev
    virtual void __fake_function0(); // fake
    virtual void readfromJSON(Json::Value &); // _ZN25StickInGroundSubcomponent12readfromJSONERN4Json5ValueE
    virtual void writetoJSON(Json::Value &)const; // _ZNK25StickInGroundSubcomponent11writetoJSONERN4Json5ValueE
    virtual void doOnHitEffect(Actor &, ProjectileComponent &); // _ZN25StickInGroundSubcomponent13doOnHitEffectER5ActorR19ProjectileComponent
    void getSubcomponentName(); // _ZN25StickInGroundSubcomponent19getSubcomponentNameEv
    StickInGroundSubcomponent(); // _ZN25StickInGroundSubcomponentC2Ev
};
