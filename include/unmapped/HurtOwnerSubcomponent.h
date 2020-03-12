#pragma once

#include "OnHitSubcomponent.h"


class HurtOwnerSubcomponent : OnHitSubcomponent {

public:
    virtual void writetoJSON(Json::Value &)const;
    virtual void readfromJSON(Json::Value &);
    ~HurtOwnerSubcomponent();
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
    HurtOwnerSubcomponent();
    void getSubcomponentName();
};
