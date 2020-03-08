#pragma once

#include "../bedrock/actor/Actor"
#include "../json/Value"


class MobEffectSubcomponent : OnHitSubcomponent {

public:
    virtual MobEffectSubcomponent::~MobEffectSubcomponent()
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);

    void getSubcomponentName();
    MobEffectSubcomponent(void);
    void _addEffectFromJSON(Json::Value &);
};
