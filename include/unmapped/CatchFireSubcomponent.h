#pragma once

#include "ProjectileComponent.h"
#include "../bedrock/actor/Actor.h"
#include "OnHitSubcomponent.h"
#include "../json/Value.h"


class CatchFireSubcomponent : OnHitSubcomponent {

public:
    virtual void readfromJSON(Json::Value &);
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
    ~CatchFireSubcomponent();
    virtual void writetoJSON(Json::Value &)const;
    void getSubcomponentName();
    CatchFireSubcomponent();
};
