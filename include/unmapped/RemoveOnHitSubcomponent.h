#pragma once

#include "OnHitSubcomponent.h"


class RemoveOnHitSubcomponent : OnHitSubcomponent {

public:
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
    ~RemoveOnHitSubcomponent();
    void getSubcomponentName();
    RemoveOnHitSubcomponent();
};
