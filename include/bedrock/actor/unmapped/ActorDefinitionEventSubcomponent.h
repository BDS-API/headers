#pragma once

#include "../../../unmapped/OnHitSubcomponent.h"
#include "../../../unmapped/ProjectileComponent.h"
#include "../../../json/Value.h"
#include "../Actor.h"


class ActorDefinitionEventSubcomponent : OnHitSubcomponent {

public:
    virtual ~ActorDefinitionEventSubcomponent();
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);

    void getSubcomponentName();
    ActorDefinitionEventSubcomponent();
};
