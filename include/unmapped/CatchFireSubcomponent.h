#pragma once

#include "./ProjectileComponent.h"
#include "../bedrock/actor/Actor.h"
#include "../json/Value.h"
#include "./OnHitSubcomponent.h"


class CatchFireSubcomponent : OnHitSubcomponent {

public:
    virtual ~CatchFireSubcomponent();
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);

    void getSubcomponentName();
    CatchFireSubcomponent();
};
