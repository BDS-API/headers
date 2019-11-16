#pragma once

class SubtreeDefinition : BehaviorDefinition {

    virtual void SubtreeDefinition::~SubtreeDefinition();
    virtual void SubtreeDefinition::~SubtreeDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;
}
