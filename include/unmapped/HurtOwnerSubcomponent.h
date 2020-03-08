#pragma once

#include "../bedrock/actor/Actor"
#include "../json/Value"


class HurtOwnerSubcomponent : OnHitSubcomponent {

public:
    virtual HurtOwnerSubcomponent::~HurtOwnerSubcomponent()
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);

    void getSubcomponentName();
    HurtOwnerSubcomponent(void);
};
