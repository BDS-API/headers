#pragma once

#include "ProjectileComponent.h"
#include "../bedrock/actor/Actor.h"
#include "OnHitSubcomponent.h"
#include "../json/Value.h"


class IgniteSubcomponent : OnHitSubcomponent {

public:
    ~IgniteSubcomponent();
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void readfromJSON(Json::Value &);
    IgniteSubcomponent();
    void getSubcomponentName();
};
