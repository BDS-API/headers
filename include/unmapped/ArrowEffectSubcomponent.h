#pragma once

#include "MobEffectSubcomponent.h"


class ArrowEffectSubcomponent : MobEffectSubcomponent {

public:
    ~ArrowEffectSubcomponent();
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
    virtual void writetoJSON(Json::Value &)const;
    ArrowEffectSubcomponent();
    void getSubcomponentName();
};
