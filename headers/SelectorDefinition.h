#pragma once

class SelectorDefinition : CompositeDefinition {

    virtual ~SelectorDefinition();
    virtual ~SelectorDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;
}
