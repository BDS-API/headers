#pragma once

#include "../bedrock/actor/Actor"
#include "../json/Value"


class CatchFireSubcomponent : OnHitSubcomponent {

public:
    virtual CatchFireSubcomponent::~CatchFireSubcomponent()
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);

    void getSubcomponentName();
    CatchFireSubcomponent(void);
};
