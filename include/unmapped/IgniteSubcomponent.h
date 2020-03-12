#pragma once

#include "OnHitSubcomponent.h"


class IgniteSubcomponent : OnHitSubcomponent {

public:
    virtual void readfromJSON(Json::Value &);
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
    virtual void writetoJSON(Json::Value &)const;
    ~IgniteSubcomponent();
    IgniteSubcomponent();
    void getSubcomponentName();
};
