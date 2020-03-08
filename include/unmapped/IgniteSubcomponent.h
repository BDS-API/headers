#pragma once

#include "../json/Value"
#include "../bedrock/actor/Actor"


class IgniteSubcomponent : OnHitSubcomponent {

public:
    IgniteSubcomponent::~IgniteSubcomponent()
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);

    void getSubcomponentName();
    IgniteSubcomponent(void);
};
