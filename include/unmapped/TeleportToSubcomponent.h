#pragma once

#include "OnHitSubcomponent.h"


class TeleportToSubcomponent : OnHitSubcomponent {

public:
    ~TeleportToSubcomponent();
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
    virtual void readfromJSON(Json::Value &);
    TeleportToSubcomponent();
    void getSubcomponentName();
};
