#pragma once

class MoveDefinition : BehaviorDefinition {

    virtual void MoveDefinition::~MoveDefinition();
    virtual void MoveDefinition::~MoveDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;
}
