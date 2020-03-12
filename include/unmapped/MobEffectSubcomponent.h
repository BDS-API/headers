#pragma once

#include "OnHitSubcomponent.h"


class MobEffectSubcomponent : OnHitSubcomponent {

public:
    virtual void readfromJSON(Json::Value &);
    ~MobEffectSubcomponent();
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
    virtual void writetoJSON(Json::Value &)const;
    void _addEffectFromJSON(Json::Value &);
    MobEffectSubcomponent();
    void getSubcomponentName();
};
