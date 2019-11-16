#pragma once

class CompositeDefinition : BehaviorDefinition {

    virtual void ~CompositeDefinition();
    virtual void ~CompositeDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;
}
