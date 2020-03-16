#pragma once

#include "OnHitSubcomponent.h"


class FreezeOnHitSubcomponent : public OnHitSubcomponent {

public:
    virtual ~FreezeOnHitSubcomponent(); // _ZN23FreezeOnHitSubcomponentD2Ev
    virtual void __fake_function0(); // fake
    virtual void readfromJSON(Json::Value &); // _ZN23FreezeOnHitSubcomponent12readfromJSONERN4Json5ValueE
    virtual void writetoJSON(Json::Value &)const; // _ZNK23FreezeOnHitSubcomponent11writetoJSONERN4Json5ValueE
    virtual void doOnHitEffect(Actor &, ProjectileComponent &); // _ZN23FreezeOnHitSubcomponent13doOnHitEffectER5ActorR19ProjectileComponent
    void getSubcomponentName(); // _ZN23FreezeOnHitSubcomponent19getSubcomponentNameEv
    FreezeOnHitSubcomponent(); // _ZN23FreezeOnHitSubcomponentC2Ev
};
