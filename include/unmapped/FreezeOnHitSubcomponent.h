#pragma once

#include "OnHitSubcomponent.h"


class FreezeOnHitSubcomponent : OnHitSubcomponent {

public:
    ~FreezeOnHitSubcomponent();
    virtual void readfromJSON(Json::Value &);
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
    virtual void writetoJSON(Json::Value &)const;
    FreezeOnHitSubcomponent();
    void getSubcomponentName();
};
