#pragma once

class BreakBlockDefinition : BehaviorDefinition {

    virtual ~BreakBlockDefinition();
    virtual ~BreakBlockDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;
}
