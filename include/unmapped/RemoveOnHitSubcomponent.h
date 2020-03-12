#pragma once

#include "ProjectileComponent.h"
#include "../bedrock/actor/Actor.h"
#include "OnHitSubcomponent.h"
#include "../json/Value.h"


class RemoveOnHitSubcomponent : OnHitSubcomponent {

public:
    virtual void readfromJSON(Json::Value &);
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
    virtual void writetoJSON(Json::Value &)const;
    ~RemoveOnHitSubcomponent();
    RemoveOnHitSubcomponent();
    void getSubcomponentName();
};
