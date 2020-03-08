#pragma once

#include "../bedrock/actor/Actor"
#include "../json/Value"


class FreezeOnHitSubcomponent : OnHitSubcomponent {

public:
    virtual FreezeOnHitSubcomponent::~FreezeOnHitSubcomponent()
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);

    void getSubcomponentName();
    FreezeOnHitSubcomponent(void);
};
