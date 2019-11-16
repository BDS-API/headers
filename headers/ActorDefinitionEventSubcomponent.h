#pragma once

class ActorDefinitionEventSubcomponent : OnHitSubcomponent {

    virtual void ~ActorDefinitionEventSubcomponent();
    virtual void ~ActorDefinitionEventSubcomponent();
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
}
