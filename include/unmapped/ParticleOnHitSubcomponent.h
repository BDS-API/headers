#pragma once

#include "OnHitSubcomponent.h"


class ParticleOnHitSubcomponent : OnHitSubcomponent {

public:
    ~ParticleOnHitSubcomponent(); // _ZN25ParticleOnHitSubcomponentD2Ev
    virtual void readfromJSON(Json::Value &); // _ZN25ParticleOnHitSubcomponent12readfromJSONERN4Json5ValueE
    virtual void writetoJSON(Json::Value &)const; // _ZNK25ParticleOnHitSubcomponent11writetoJSONERN4Json5ValueE
    virtual void doOnHitEffect(Actor &, ProjectileComponent &); // _ZN25ParticleOnHitSubcomponent13doOnHitEffectER5ActorR19ProjectileComponent
    void getSubcomponentName(); // _ZN25ParticleOnHitSubcomponent19getSubcomponentNameEv
    ParticleOnHitSubcomponent(); // _ZN25ParticleOnHitSubcomponentC2Ev
    bool isParticleTypeIconBreak()const; // _ZNK25ParticleOnHitSubcomponent23isParticleTypeIconBreakEv
};
