#pragma once

#include "ProjectileComponent.h"
#include "../bedrock/actor/Actor.h"
#include "OnHitSubcomponent.h"
#include "../json/Value.h"


class FreezeOnHitSubcomponent : OnHitSubcomponent {

public:
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
    ~FreezeOnHitSubcomponent();
    virtual void writetoJSON(Json::Value &)const;
    virtual void readfromJSON(Json::Value &);
    void getSubcomponentName();
    FreezeOnHitSubcomponent();
};
