#pragma once

#include "../bedrock/actor/Actor"
#include "../json/Value"


class StickInGroundSubcomponent : OnHitSubcomponent {

public:
    virtual StickInGroundSubcomponent::~StickInGroundSubcomponent()
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);

    void getSubcomponentName();
    StickInGroundSubcomponent(void);
};
