#pragma once

class CompositeDefinition : BehaviorDefinition {

    virtual ~CompositeDefinition();
    virtual ~CompositeDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;
}
