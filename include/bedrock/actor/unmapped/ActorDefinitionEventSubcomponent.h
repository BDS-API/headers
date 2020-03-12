#pragma once

#include "../../../unmapped/OnHitSubcomponent.h"


class ActorDefinitionEventSubcomponent : OnHitSubcomponent {

public:
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    ~ActorDefinitionEventSubcomponent();
    void getSubcomponentName();
    ActorDefinitionEventSubcomponent();
};
