#pragma once

#include "MobEffectSubcomponent.h"


class ArrowEffectSubcomponent : public MobEffectSubcomponent {

public:
    virtual ~ArrowEffectSubcomponent(); // _ZN23ArrowEffectSubcomponentD2Ev
    virtual void __fake_function0(); // fake
    virtual void writetoJSON(Json::Value &)const; // _ZNK23ArrowEffectSubcomponent11writetoJSONERN4Json5ValueE
    virtual void doOnHitEffect(Actor &, ProjectileComponent &); // _ZN23ArrowEffectSubcomponent13doOnHitEffectER5ActorR19ProjectileComponent
    void getSubcomponentName(); // _ZN23ArrowEffectSubcomponent19getSubcomponentNameEv
    ArrowEffectSubcomponent(); // _ZN23ArrowEffectSubcomponentC2Ev
};
