#pragma once

#include "ProjectileComponent.h"
#include "../bedrock/actor/Actor.h"
#include "OnHitSubcomponent.h"
#include "../json/Value.h"


class HurtOwnerSubcomponent : OnHitSubcomponent {

public:
    virtual void writetoJSON(Json::Value &)const;
    ~HurtOwnerSubcomponent();
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
    virtual void readfromJSON(Json::Value &);
    HurtOwnerSubcomponent();
    void getSubcomponentName();
};
