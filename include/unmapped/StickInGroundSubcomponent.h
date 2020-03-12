#pragma once

#include "OnHitSubcomponent.h"


class StickInGroundSubcomponent : OnHitSubcomponent {

public:
    virtual void readfromJSON(Json::Value &);
    ~StickInGroundSubcomponent();
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
    void getSubcomponentName();
    StickInGroundSubcomponent();
};
