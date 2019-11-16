#pragma once

class CompositeDefinition : BehaviorDefinition {

    virtual void CompositeDefinition::~CompositeDefinition();
    virtual void CompositeDefinition::~CompositeDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;
}
