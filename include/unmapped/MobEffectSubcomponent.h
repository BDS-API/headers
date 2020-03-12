#pragma once

#include "ProjectileComponent.h"
#include "../bedrock/actor/Actor.h"
#include "OnHitSubcomponent.h"
#include "../json/Value.h"


class MobEffectSubcomponent : OnHitSubcomponent {

public:
    virtual void readfromJSON(Json::Value &);
    ~MobEffectSubcomponent();
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
    virtual void writetoJSON(Json::Value &)const;
    MobEffectSubcomponent();
    void getSubcomponentName();
    void _addEffectFromJSON(Json::Value &);
};
