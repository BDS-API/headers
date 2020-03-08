#pragma once

#include "../Actor"
#include "../../../unmapped/OnHitSubcomponent"
#include "../../../json/Value"
#include "../../../unmapped/ProjectileComponent"


class ActorDefinitionEventSubcomponent : OnHitSubcomponent {

public:
    virtual ActorDefinitionEventSubcomponent::~ActorDefinitionEventSubcomponent()
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);

    void getSubcomponentName();
    ActorDefinitionEventSubcomponent(void);
};
