#pragma once

#include "OnHitSubcomponent.h"


class MobEffectSubcomponent : OnHitSubcomponent {

public:
    ~MobEffectSubcomponent(); // _ZN21MobEffectSubcomponentD2Ev
    virtual void readfromJSON(Json::Value &); // _ZN21MobEffectSubcomponent12readfromJSONERN4Json5ValueE
    virtual void writetoJSON(Json::Value &)const; // _ZNK21MobEffectSubcomponent11writetoJSONERN4Json5ValueE
    virtual void doOnHitEffect(Actor &, ProjectileComponent &); // _ZN21MobEffectSubcomponent13doOnHitEffectER5ActorR19ProjectileComponent
    void getSubcomponentName(); // _ZN21MobEffectSubcomponent19getSubcomponentNameEv
    MobEffectSubcomponent(); // _ZN21MobEffectSubcomponentC2Ev
    void _addEffectFromJSON(Json::Value &); // _ZN21MobEffectSubcomponent18_addEffectFromJSONERN4Json5ValueE
};
