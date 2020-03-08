#pragma once

#include "../json/Value"
#include "../bedrock/actor/Actor"


class HurtOwnerSubcomponent : OnHitSubcomponent {

public:
    HurtOwnerSubcomponent::~HurtOwnerSubcomponent()
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);

    void getSubcomponentName();
    HurtOwnerSubcomponent(void);
};
