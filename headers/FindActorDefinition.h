#pragma once

class FindActorDefinition : BehaviorDefinition {

    virtual void FindActorDefinition::~FindActorDefinition();
    virtual void FindActorDefinition::~FindActorDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;
}
