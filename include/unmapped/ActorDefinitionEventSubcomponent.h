#pragma once

class ActorDefinitionEventSubcomponent : OnHitSubcomponent {

public:
    virtual ActorDefinitionEventSubcomponent::~ActorDefinitionEventSubcomponent();
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);

    void getSubcomponentName(void);
    ActorDefinitionEventSubcomponent(void);
};
