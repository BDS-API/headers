#pragma once

class BreakBlockDefinition : BehaviorDefinition {

    virtual void ~BreakBlockDefinition();
    virtual void ~BreakBlockDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;
}
