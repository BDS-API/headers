#pragma once

#include "../json/Value"
#include "../bedrock/actor/Actor"


class StickInGroundSubcomponent : OnHitSubcomponent {

public:
    StickInGroundSubcomponent::~StickInGroundSubcomponent()
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);

    void getSubcomponentName();
    StickInGroundSubcomponent(void);
};
