#pragma once

#include "../json/Value"
#include "../bedrock/actor/Actor"


class ArrowEffectSubcomponent : MobEffectSubcomponent {

public:
    ArrowEffectSubcomponent::~ArrowEffectSubcomponent()
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);

    void getSubcomponentName();
    ArrowEffectSubcomponent(void);
};
