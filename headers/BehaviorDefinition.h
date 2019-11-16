#pragma once

class BehaviorDefinition {

    virtual void BehaviorDefinition::~BehaviorDefinition();
    virtual void BehaviorDefinition::~BehaviorDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;
}
