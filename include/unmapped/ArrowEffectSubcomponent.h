#pragma once

#include "../bedrock/actor/Actor"
#include "../json/Value"


class ArrowEffectSubcomponent : MobEffectSubcomponent {

public:
    virtual ArrowEffectSubcomponent::~ArrowEffectSubcomponent()
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);

    void getSubcomponentName();
    ArrowEffectSubcomponent(void);
};
