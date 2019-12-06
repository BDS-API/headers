#pragma once

class ActorDefinitionEventSubcomponent : OnHitSubcomponent {

public:
    virtual ~ActorDefinitionEventSubcomponent();
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);

    void getSubcomponentName(void);
    void ActorDefinitionEventSubcomponent(void);
};
