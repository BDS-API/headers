#pragma once

#include "ProjectileComponent.h"
#include "../bedrock/actor/Actor.h"
#include "MobEffectSubcomponent.h"
#include "../json/Value.h"


class ArrowEffectSubcomponent : MobEffectSubcomponent {

public:
    virtual void writetoJSON(Json::Value &)const;
    ~ArrowEffectSubcomponent();
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
    ArrowEffectSubcomponent();
    void getSubcomponentName();
};
