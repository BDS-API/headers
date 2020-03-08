#pragma once

#include "../bedrock/actor/Actor"
#include "../json/Value"


class ImpactDamageSubcomponent : OnHitSubcomponent {

public:
    virtual ImpactDamageSubcomponent::~ImpactDamageSubcomponent()
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);

    void getSubcomponentName();
    ImpactDamageSubcomponent(void);
};
