#pragma once

#include "OnHitSubcomponent.h"


class GrantXPSubcomponent : OnHitSubcomponent {

public:
    ~GrantXPSubcomponent();
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    void getSubcomponentName();
    GrantXPSubcomponent();
};
