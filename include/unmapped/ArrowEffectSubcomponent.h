#pragma once

#include "../json/Value"
#include "../bedrock/actor/Actor"


class ArrowEffectSubcomponent : MobEffectSubcomponent {

public:
    virtual ArrowEffectSubcomponent::~ArrowEffectSubcomponent();
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);

    void getSubcomponentName(void);
    ArrowEffectSubcomponent(void);
};
