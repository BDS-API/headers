#pragma once

#include "../json/Value"
#include "../bedrock/actor/Actor"


class RemoveOnHitSubcomponent : OnHitSubcomponent {

public:
    RemoveOnHitSubcomponent::~RemoveOnHitSubcomponent()
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);

    void getSubcomponentName();
    RemoveOnHitSubcomponent(void);
};
