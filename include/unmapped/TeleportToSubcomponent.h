#pragma once

#include "../bedrock/actor/Actor"
#include "../json/Value"


class TeleportToSubcomponent : OnHitSubcomponent {

public:
    virtual TeleportToSubcomponent::~TeleportToSubcomponent()
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);

    void getSubcomponentName();
    TeleportToSubcomponent(void);
};
