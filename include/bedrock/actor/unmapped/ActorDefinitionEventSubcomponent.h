#pragma once

#include "../../../json/Value.h"
#include "../../../unmapped/OnHitSubcomponent.h"
#include "../Actor.h"
#include "../../../unmapped/ProjectileComponent.h"


class ActorDefinitionEventSubcomponent : OnHitSubcomponent {

public:
    virtual void readfromJSON(Json::Value &);
    ~ActorDefinitionEventSubcomponent();
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
    virtual void writetoJSON(Json::Value &)const;
    ActorDefinitionEventSubcomponent();
    void getSubcomponentName();
};
