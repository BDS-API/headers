#pragma once

class SelectorDefinition : CompositeDefinition {

    virtual void SelectorDefinition::~SelectorDefinition();
    virtual void SelectorDefinition::~SelectorDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;
}
