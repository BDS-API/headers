#pragma once

#include "OnHitSubcomponent.h"


class TeleportToSubcomponent : public OnHitSubcomponent {

public:
    virtual ~TeleportToSubcomponent(); // _ZN22TeleportToSubcomponentD2Ev
    virtual void __fake_function0(); // fake
    virtual void readfromJSON(Json::Value &); // _ZN22TeleportToSubcomponent12readfromJSONERN4Json5ValueE
    virtual void writetoJSON(Json::Value &)const; // _ZNK22TeleportToSubcomponent11writetoJSONERN4Json5ValueE
    virtual void doOnHitEffect(Actor &, ProjectileComponent &); // _ZN22TeleportToSubcomponent13doOnHitEffectER5ActorR19ProjectileComponent
    void getSubcomponentName(); // _ZN22TeleportToSubcomponent19getSubcomponentNameEv
    TeleportToSubcomponent(); // _ZN22TeleportToSubcomponentC2Ev
};
