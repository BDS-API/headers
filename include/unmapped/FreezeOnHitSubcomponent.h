#pragma once

#include "../json/Value"
#include "../bedrock/actor/Actor"


class FreezeOnHitSubcomponent : OnHitSubcomponent {

public:
    FreezeOnHitSubcomponent::~FreezeOnHitSubcomponent()
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);

    void getSubcomponentName();
    FreezeOnHitSubcomponent(void);
};
