#pragma once

class LookAtActorDefinition : BehaviorDefinition {

    virtual void LookAtActorDefinition::~LookAtActorDefinition();
    virtual void LookAtActorDefinition::~LookAtActorDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;
}
