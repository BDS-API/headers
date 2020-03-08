#pragma once

#include "../../../unmapped/OnHitSubcomponent"
#include "../../../unmapped/ProjectileComponent"
#include "../../../json/Value"
#include "../Actor"


class ActorDefinitionEventSubcomponent : OnHitSubcomponent {

public:
    ActorDefinitionEventSubcomponent::~ActorDefinitionEventSubcomponent()
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);

    void getSubcomponentName();
    ActorDefinitionEventSubcomponent(void);
};
