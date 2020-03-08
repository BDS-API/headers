#pragma once

#include "../json/Value"
#include "../bedrock/actor/Actor"


class ImpactDamageSubcomponent : OnHitSubcomponent {

public:
    virtual ImpactDamageSubcomponent::~ImpactDamageSubcomponent();
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);

    void getSubcomponentName(void);
    ImpactDamageSubcomponent(void);
};
