#pragma once

#include "ProjectileComponent.h"
#include "../bedrock/actor/Actor.h"
#include "OnHitSubcomponent.h"
#include "../json/Value.h"


class GrantXPSubcomponent : OnHitSubcomponent {

public:
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    ~GrantXPSubcomponent();
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
    void getSubcomponentName();
    GrantXPSubcomponent();
};
