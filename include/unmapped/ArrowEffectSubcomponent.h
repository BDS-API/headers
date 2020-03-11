#pragma once

#include "./ProjectileComponent.h"
#include "../bedrock/actor/Actor.h"
#include "./MobEffectSubcomponent.h"
#include "../json/Value.h"


class ArrowEffectSubcomponent : MobEffectSubcomponent {

public:
    virtual ~ArrowEffectSubcomponent();
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);

    void getSubcomponentName();
    ArrowEffectSubcomponent();
};
