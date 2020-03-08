#pragma once

#include "../json/Value"
#include "../bedrock/actor/Actor"


class MobEffectSubcomponent : OnHitSubcomponent {

public:
    MobEffectSubcomponent::~MobEffectSubcomponent()
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);

    void getSubcomponentName();
    MobEffectSubcomponent(void);
    void _addEffectFromJSON(Json::Value &);
};
