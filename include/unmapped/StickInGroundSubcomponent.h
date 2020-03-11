#pragma once

#include "./ProjectileComponent.h"
#include "../bedrock/actor/Actor.h"
#include "../json/Value.h"
#include "./OnHitSubcomponent.h"


class StickInGroundSubcomponent : OnHitSubcomponent {

public:
    virtual ~StickInGroundSubcomponent();
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);

    void getSubcomponentName();
    StickInGroundSubcomponent();
};
