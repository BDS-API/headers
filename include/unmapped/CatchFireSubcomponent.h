#pragma once

#include "OnHitSubcomponent.h"


class CatchFireSubcomponent : OnHitSubcomponent {

public:
    virtual void writetoJSON(Json::Value &)const;
    virtual void readfromJSON(Json::Value &);
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
    ~CatchFireSubcomponent();
    void getSubcomponentName();
    CatchFireSubcomponent();
};
