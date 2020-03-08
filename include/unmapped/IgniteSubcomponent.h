#pragma once

#include "../bedrock/actor/Actor"
#include "../json/Value"


class IgniteSubcomponent : OnHitSubcomponent {

public:
    virtual IgniteSubcomponent::~IgniteSubcomponent()
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);

    void getSubcomponentName();
    IgniteSubcomponent(void);
};
