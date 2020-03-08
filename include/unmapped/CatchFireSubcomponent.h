#pragma once

#include "../json/Value"
#include "../bedrock/actor/Actor"


class CatchFireSubcomponent : OnHitSubcomponent {

public:
    CatchFireSubcomponent::~CatchFireSubcomponent()
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);

    void getSubcomponentName();
    CatchFireSubcomponent(void);
};
