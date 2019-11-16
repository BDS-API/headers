#pragma once

class SelectorDefinition : CompositeDefinition {

    virtual void ~SelectorDefinition();
    virtual void ~SelectorDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void BehaviorDefinition::createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;
}
